# CS121_project_7
(lab) Heap of Students pt 1

# Heap of Students pt 1

## UML

```mermaid

classDiagram

class Student{
    studentString: string
    firstName: string
    lastName: string
    address: Address
    birthDate: Date
    gradDate: Date
    creditHours: int
    Student()
    ~Student()
    init(string studentString)
    printStudent()
    getFirstName() string
    getLastName() string
    int getCreditHours()
}

class Address{
    street: string
    city: string
    state: string
    zip: string
    Address()
    init(street, city, state, zip)
    printAddress()
}

class Date{
    month: int
    day: int
    year: int
    Date()
    init(dateString)
    printDate()
}

Student --> Address
Student --> Date

```

