/*
======================================================================================================
FEATURE / PROPERTY       | RAW / C-STYLE ARRAY     | STL ARRAY (std::array) | STL VECTOR (std::vector)
======================================================================================================
1. Memory / Sizing       | Static                  | Static                 | Dynamic
2. Function Passing      | Decays to pointer       | Pass by value          | Pass by value
                         |                         | (or by reference)      | (or by reference)
3. Size Tracking         | Must pass around size   | .size() available      | .size() available
4. Assignment & Copying  | Cannot assign directly  | Can assign to          | Can assign to
                         | to other variables (X)  | other variables        | other variables
=======================================================================================================
*/
