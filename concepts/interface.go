// Interface
package main

import (
	"fmt"
	
)

type Animal interface {
	MakeSound() string
	horns() string
  }
  
  // Struct implementing the interface
  type Dog struct{}
  
  func (d Dog) MakeSound() string {
	return "Woof!"
  }
  func (d Dog) horns() string {
	return "Woof! no horns not horny"
  }
  
  // Another struct implementing the interface
  type Cat struct{}
  
  func (c Cat) MakeSound() string {
	return "Meow!"
  }
  func (c Cat) horns() string {
	return "no horns still horny pussh"
  }

 type BHains struct{}

 func (b BHains) MakeSound()  string {
	return "MOOOOOOOOOO"
 }
 
 func (b BHains) horns() string {
	return "2 Horns, 2 horny"
 }

  func main() {
	var animal Animal // Interface variable can hold any Animal implementer
  
	animal = Dog{}
	fmt.Println(animal.MakeSound(), animal.horns()) // Prints "Woof!"
  
	animal = Cat{}
	fmt.Println(animal.MakeSound(), animal.horns()) // Prints "Meow!"
	
	var bigAnimal Animal
	bigAnimal = BHains{}
	fmt.Println(bigAnimal.MakeSound(), bigAnimal.horns())
  }
  
