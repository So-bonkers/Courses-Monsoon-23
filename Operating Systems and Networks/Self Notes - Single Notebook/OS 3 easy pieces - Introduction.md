# Operating Systems in Three Easy Pieces - Remzi, Andrea

## Introduction to Operating Systems

**Q** : What happens when you run a program?
**Von Neumann model of computing**: A running program does one very simple thing: It executes instructions. Many millions of times every second, the processor **fetches** an instruction from memory, **decodes** it (i.e figures out which instruction this is), and **executes it** (i.e it does the thing that it is supposed to do, like add two nos. together, access memory, check a condition, jump to a function, etc.) After it is done with this instruction, the processor moves on to the next instruction, and so on, until the program finally completes.

But, as program runs, a lot of other wild things are going on with the primary goal of making the system **easy to use**. There is a body of software, in fact, that is responsible for making it easy to run programs (even allowing you to seemingly run many at the same time), allowing programs to share memory, enabling programs to interact with devices, etc. That body is called the **operating system (OS)**, as it is in charge of making sure the system operates correctly and efficiently in an easy-to-use manner.

The primary way the OS does this is through a general technique that we call **virtualization**. That is, the OS takes a **physical** resource (such as the processor, or memory, or a disk) and transforms it into a more general, powerful, and easy-to-use **virtual** form of iself. Thus, we sometimes refer to the operating system as a virtual machine.

In order to allow users to tell the OS what to do and make use of the features of the virtual machine (such as running a program or allocating memory, etc) the OS also provides some interfaces (APIs) that you can call. A typical OS, in fact, exports a few hundred **system calls** that are available to applications. Because the OS provides these calls to **run programs**, **access memory** and devices, and other related actions, we aldo sometimes say that the OS provides a **standard library** to applications.

Finally, because virtualization allows many programs to run (thus sharing the CPU), and many programs to access devices (thus sharing disks and so forth), the OS is sometimes known as a **resource manager**.

Each of the CPU, memory, and disk is a **resource** of the system; it is thus the operating system's role to **manage** those resources, doing so efficiently or fairly or indeed with many other possible goals in mind. 