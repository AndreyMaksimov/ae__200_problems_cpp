// https://www.algoexpert.io/questions/shorten-path
//
// #Stacks
// #Hard

#include "ShortenPath.h"

namespace algoExpert::stacks {
    // TODO: replace multiple find('/'...) by one pass with istringstream from <stream>
    // as in AE solution
    string shortenPath(string path) {
        vector<string> subdirs;
        const bool abs_path = path.find('/') == 0;
        size_t prev_slash_pos = abs_path ? 1 : 0;
        while (true) {
            const auto slash_pos = path.find('/', prev_slash_pos);
            const auto sub_dir = slash_pos == string::npos ?
                path.substr(prev_slash_pos):
                path.substr(prev_slash_pos, slash_pos - prev_slash_pos);
            if (!sub_dir.empty() && sub_dir != ".") {
                if (sub_dir == "..") {
                    const bool root_dir = abs_path && subdirs.empty();
                    if (!root_dir) {
                        if (subdirs.empty() || subdirs.back() == "..") subdirs.push_back(sub_dir);
                        else subdirs.pop_back();
                    }
                }
                else subdirs.push_back(sub_dir);
            }
            if (slash_pos == string::npos) break;
            prev_slash_pos = slash_pos + 1;
        }
        string shortened_path = abs_path ? "/" : "";
        for (const auto& subdir : subdirs) {
            shortened_path += subdir;
            shortened_path += "/";
        }
        if (!subdirs.empty()) shortened_path.pop_back();
        return shortened_path;
    }
}
