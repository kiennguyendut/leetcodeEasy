#include <iostream>
#include <memory> // Required for smart pointers

void uniquePointerExample() {
    // Create a unique pointer to an int
    std::unique_ptr<int> uniquePtr = std::make_unique<int>(42);
    std::cout << "Unique Pointer Value: " << *uniquePtr << std::endl;

    // Transfer ownership of the unique pointer
    std::unique_ptr<int> transferredPtr = std::move(uniquePtr);
    if (!uniquePtr) {
        std::cout << "Ownership transferred. uniquePtr is now null." << std::endl;
    }
}

void sharedPointerExample() {
    // Create a shared pointer to an int
    std::shared_ptr<int> sharedPtr1 = std::make_shared<int>(100);
    std::shared_ptr<int> sharedPtr2 = sharedPtr1; // Shared ownership

    std::cout << "Shared Pointer Value: " << *sharedPtr1 << std::endl;
    std::cout << "Shared Pointer Use Count: " << sharedPtr1.use_count() << std::endl;
}

void weakPointerExample() {
    // Create a shared pointer
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(200);

    // Create a weak pointer from the shared pointer
    std::weak_ptr<int> weakPtr = sharedPtr;

    if (auto lockedPtr = weakPtr.lock()) { // Lock weak pointer to access the resource
        std::cout << "Weak Pointer Value: " << *lockedPtr << std::endl;
    }
}

int main() {
    uniquePointerExample();
    sharedPointerExample();
    weakPointerExample();
    return 0;
}