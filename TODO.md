## Some points to refactor code with new c++ standards improvements

*   #### Iterators

    *   New global functions  
        Use  
        ```cpp
        begin(vec) 
        ``` 
        instead of  
        ```cpp
        vec.begin(), etc..
        ```
        
    *   **const\_iterator**, **reverse\_iterator** ...  
        Use global
        ```cpp
        cbegin, rbegin, crbegin, ...
        ```
        
*   #### Structured binding
    
    *   Replace pair where it possibly  
        Use  
        ```cpp
        auto [some1, some2] = some\_fun(...);
        ```
        
        instead of  
        ```cpp
        auto p = some\_fun(...);
        auto some1 = p.first;
        **`auto some2 = p.second;
        ```
        
*   #### Emplacement

    *   sdsadsa