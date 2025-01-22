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
        
    *   Use global **advance(...)** instead of **+/-** ?
        
  *   #### Structured binding
    
      *   Replace pair where it possibly  
          Use  
          ```cpp
          auto [val1, val2] = some_fun(...);
          ```
        
          instead of  
          ```cpp
          auto p = some_fun(...);
          auto val1 = p.first;
          auto val2 = p.second;
          ```

      *   Initializer in an **if** statement + structured binding + **insert_or_assign** . Example with **map**

          ```cpp
          map<string, int> scores;            // Create an empty std::map
          //...
          if (auto [iter, success] = scores.insert_or_assign("Graham"s, 66); success) {
              cout << "Inserted a new element\n";
          }
          else {
              auto [name, score] = *iter;     // Get the members of the element pair
              cout << "Existing element with name " << name << " now has score " << score << endl;
          }
          ```

*   #### Emplacement

    *   Use **emplace** instead of **push**, **push_back** ...
    *   **map**: use **try_emplace**