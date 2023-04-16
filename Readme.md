Iterator Pattern Design examples in C++
How it works:
- Iterator: 
    + In the main() function, we create a ProductList object and add some products to the list using the createProductList() method. Then we iterate through the list of products using a ProductIterator object returned by the ProductList object's getIterator() method.

    + For each iteration, we call the hasNext() method of the ProductIterator object to check if the list has the next product. If yes, we get the next product using the getNext() method and display that product information.
- Non-Iterator:
    + It's simply a C++ code to display list of products of a store. (Using class obviously?)

These codes belongs to group 14 in OOP-21VP class. If you have any question, feel free to message us via:
+ lhnguyen21@vp.fitus.edu.vn
+ pngkhiem21@vp.fitus.edu.vn