# CS121_project_7
(lab) Heap of Students pt 1

# Heap of Students pt 1

## UML

```mermaid

classDiagram

class Student{
    # string studentString
    # string firstName
    # string lastName
    # Address* Address
    # Date* birthDate
    # Date* gradDate
    # int creditHours
    + Student()
    + ~Student()
    + void init(string studentString)
    + void printStudent()
    + string getFirstName()
    + string getLastName()
    + int getCreditHours()
}

class Address{
    # string street
    # string city
    # string state
    # string zip
    + Address()
    + void init(street, city, state, zip)
    + void printAddress()
}

class Date{
    # string dateString
    # int month
    # int day
    # int year
    + Date()
    + void init(dateString)
    + void printDate()
}

Student --> Address
Student --> Date

```

