## Some points to refactor code with new c++ standards improvements

*   #### Iterators

    *   New global functions  
        Use  
        **`begin(vec)`**  
        instead of  
        **`vec.begin()`**, etc..

    *   **const\_iterator**, **reverse\_iterator** ...  
        Use global **`cbegin, rbegin, crbegin,`** ...
    
*   #### Structured binding

    *   Replace pair where it possibly  
        Use  
        **`auto \[some1, some2\] = some\_fun(...);`**
        instead of  
        **`auto p = some\_fun(...);
        auto some1 = p.first;
        auto some2 = p.second;`**
*   #### Emplacement

    *   sdsadsa