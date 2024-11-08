// https://www.algoexpert.io/questions/generate-div-tags
//
// #Recursion
// #Hard

#include "GenerateDivTags.h"

namespace algoExpert::recursion {

    const string s_open = "<div>";
    const string s_close = "</div>";

    void gdt_helper(
        string current,
        const bool b_open, // true if we enter toe add "open tag"; false - for "close tag"
        int open_left,
        int close_left,
        vector<string>& result) {
        if (b_open) {
            if (open_left > 0) {
                current += s_open;
                --open_left;
                ++close_left;
            }
        }
        else {
            if (close_left > 0) {
                current += s_close;
                --close_left;
            }
        }
        if (open_left == 0 && close_left == 0) {
            result.push_back(current);
            return;
        }
        if (open_left > 0) gdt_helper(current, true, open_left, close_left, result);
        if (close_left > 0) gdt_helper(current, false, open_left, close_left, result);
    }

    vector<string> generateDivTags(int numberOfTags) {
        vector<string> result;
        if (numberOfTags > 0) gdt_helper(
            "",
            true,
            numberOfTags,
            0,
            result);
        return result;
    }
}
