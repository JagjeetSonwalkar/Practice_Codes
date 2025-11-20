////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                shallow copy and deep copy
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Shallow Copy:
A shallow copy means you make a new object, but it still refers to the same inner objects (like other objects that are part of the original object).
Think of it like making a photocopy of a document. The photocopy looks exactly the same, but if the original document changes, the photocopy changes too because they are still linked to the same things.
Example:
Imagine you have a person (Person class) with an address (Address class). If you make a shallow copy of the person, the address of the copied person still points to the same address as the original person.

So, if you change the address of one person, it will also change for the copied person, because they are still sharing the same address.

Deep Copy:
A deep copy means you create a new object and also create new copies of all the objects inside it. This way, the new object doesn't share anything with the original one.
It’s like making a brand new document by copying everything, including making new copies of the things inside the document (like if it has attachments). The new document is completely separate from the original one.
Example:
Imagine the same Person object with an Address object. With a deep copy, when you copy the person, you create a totally new address for the new person. Now, if you change the address for one person, the other person’s address won’t be affected, because they are completely independent.

Simple Comparison:
Shallow Copy: Copying the outer object, but both original and copied objects still share the same inner objects.
Deep Copy: Copying the outer object and making a completely new copy of the inner objects, so they don’t share anything.
In short:

Shallow copy: The original and the copy still share the same "inside" things.
Deep copy: The original and the copy have their own "inside" things, so they don't affect each other.

*/