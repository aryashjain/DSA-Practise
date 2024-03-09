// Interface (contract)
// what is an interface and how is it implemented via a class
class Animal {
public:
  virtual void makeSound() = 0; // Pure virtual function - must be implemented by subclasses
};

// Class implementing the interface
class Dog : public Animal {
public:
  void makeSound() override {
    std::cout << "Woof!" << std::endl;
  }
};

// Another class implementing the interface (can have different sound)
class Cat : public Animal {
public:
  void makeSound() override {
    std::cout << "Meow!" << std::endl;
  }
};

int main() {
  Animal* animal;  // Declare an Animal pointer (can point to Dog or Cat)

  // Create a Dog object and assign it to the Animal pointer
  animal = new Dog();
  animal->makeSound();  // Calls Dog's makeSound()

  // Create a Cat object and assign it to the Animal pointer
  animal = new Cat();
  animal->makeSound();  // Calls Cat's makeSound()

  return 0;
}
