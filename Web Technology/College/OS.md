1. What is an operating system?
a) collection of programs that manages hardware resources
b) system service provider to the application programs
c) interface between the hardware and application programs
d) all of the mentioned
Answer: d
Explanation: An Operating System acts as an intermediary between user/user applications/application programs and hardware. It is a program that manages hardware resources. It provides services to application programs.

2. To access the services of operating system, the interface is provided by the ___________
a) System calls
b) API
c) Library
d) Assembly instructions
Answer: a
Explanation: To access services of the Operating System an interface is provided by the System Calls. Generally, these are functions written in C and C++. Open, Close, Read, Write are some of most prominently used system calls.

3. Which one of the following is not true?
a) kernel is the program that constitutes the central core of the operating system
b) kernel is the first part of operating system to load into memory during booting
c) kernel is made of various modules which can not be loaded in running operating system
d) kernel remains in the memory during the entire computer session
Answer: c
Explanation: Kernel is the first program which is loaded in memory when OS is loading as well as it remains in memory till OS is running. Kernel is the core part of the OS which is responsible for managing resources, allowing multiple processes to use the resources and provide services to various processes. Kernel modules can be loaded and unloaded in run-time i.e. in running OS.

4. Which one of the following error will be handle by the operating system?
a) power failure
b) lack of paper in printer
c) connection failure in the network
d) all of the mentioned
Answer: d
Explanation: All the mentioned errors are handled by OS. The OS is continuously monitoring all of its resources. Also, the OS is constantly detecting and correcting errors.

5. What is the main function of the command interpreter?
a) to get and execute the next user-specified command
b) to provide the interface between the API and application program
c) to handle the files in operating system
d) none of the mentioned
Answer: a
Explanation: The main function of command interpreter is to get and execute the next user-specified command. Command Interpreter checks for valid command and then runs that command else it will throw an error.



6. In Operating Systems, which of the following is/are CPU scheduling algorithms?
a) Round Robin
b) Shortest Job First
c) Priority
d) All of the mentioned
Answer: d
Explanation: In Operating Systems, CPU scheduling algorithms are:
i) First Come First Served scheduling
ii) Shortest Job First scheduling
iii) Priority scheduling
iv) Round Robin scheduling
v) Multilevel Queue scheduling
vi) Multilevel Feedback Queue scheduling
All of these scheduling algorithms have their own advantages and disadvantages.

7. If a process fails, most operating system write the error information to a ______
a) log file
b) another running process
c) new file
d) none of the mentioned
Answer: a
Explanation: If a process fails, most operating systems write the error information to a log file. Log file is examined by the debugger, to find out what is the actual cause of that particular problem. Log file is useful for system programmers for correcting errors.

8. Which facility dynamically adds probes to a running system, both in user processes and in the kernel?
a) DTrace
b) DLocate
c) DMap
d) DAdd
Answer: a
Explanation: A facility that dynamically adds probes to a running system, both in user process and in the kernel is called DTrace. This is very much useful in troubleshooting kernels in real-time.

9. Which one of the following is not a real time operating system?
a) VxWorks
b) QNX
c) RTLinux
d) Palm OS
Answer: d
Explanation: VxWorks, QNX & RTLinux are real-time operating systems. Palm OS is a mobile operating system. Palm OS is developed for Personal Digital Assistants (PDAs).

10. The OS X has ____________
a) monolithic kernel
b) hybrid kernel
c) microkernel
d) monolithic kernel with modules
Answer: b
Explanation: OS X has a hybrid kernel. Hybrid kernel is a combination of two different kernels. OS X is developed by Apple and originally it is known as Mac OS X.

1. The systems which allow only one process execution at a time, are called __________
a) uniprogramming systems
b) uniprocessing systems
c) unitasking systems
d) none of the mentioned
Answer: b
Explanation: Those systems which allow more than one process execution at a time, are called multiprocessing systems. Uniprocessing means only one processor.

2. In operating system, each process has its own __________
a) address space and global variables
b) open files
c) pending alarms, signals and signal handlers
d) all of the mentioned
Answer: d
Explanation: In Operating Systems, each process has its own address space which contains code, data, stack and heap segments or sections. Each process also has a list of files which is opened by the process as well as all pending alarms, signals and various signal handlers.

3. In Unix, Which system call creates the new process?
a) fork
b) create
c) new
d) none of the mentioned
Answer: a
Explanation: In UNIX, a new process is created by fork() system call. fork() system call returns a process ID which is generally the process id of the child process created.



4. A process can be terminated due to __________
a) normal exit
b) fatal error
c) killed by another process
d) all of the mentioned
Answer: d
Explanation: A process can be terminated normally by completing its task or because of fatal error or killed by another process or forcefully killed by a user. When the process completes its task without any error then it exits normally. The process may exit abnormally because of the occurrence of fatal error while it is running. The process can be killed or terminated forcefully by another process.

5. What is the ready state of a process?
a) when process is scheduled to run after some execution
b) when process is unable to run until some task has been completed
c) when process is using the CPU
d) none of the mentioned
Answer: a
Explanation: Ready state of the process means process has all necessary resources which are required for execution of that process when CPU is allocated. Process is ready for execution but waiting for the CPU to be allocated.



6. What is interprocess communication?
a) communication within the process
b) communication between two process
c) communication between two threads of same process
d) none of the mentioned
Answer: b
Explanation: Interprocess Communication (IPC) is a communication mechanism that allows processes to communicate with each other and synchronise their actions without using the same address space. IPC can be achieved using shared memory and message passing.

7. A set of processes is deadlock if __________
a) each process is blocked and will remain so forever
b) each process is terminated
c) all processes are trying to kill each other
d) none of the mentioned
Answer: a
Explanation: Deadlock is a situation which occurs because process A is waiting for one resource and holds another resource (blocking resource). At the same time another process B demands blocking a resource as it is already held by a process A, process B is waiting state unless and until process A releases occupied resource.

8. A process stack does not contain __________
a) Function parameters
b) Local variables
c) Return addresses
d) PID of child process
Answer: d
Explanation: Process stack contains Function parameters, Local variables and Return address. It does not contain the PID of child process.

9. Which system call can be used by a parent process to determine the termination of child process?
a) wait
b) exit
c) fork
d) get
Answer: a
Explanation: wait() system call is used by the parent process to determine termination of child process. The parent process uses wait() system call and gets the exit status of the child process as well as the pid of the child process which is terminated.

10. The address of the next instruction to be executed by the current process is provided by the __________
a) CPU registers
b) Program counter
c) Process stack
d) Pipe
Answer: b
Explanation: The address of the next instruction to be executed by the current process is provided by the Program Counter. After every instruction is executed, the Program Counter is incremented by 1 i.e. address of the next instruction to be executed. CPU fetches instruction from the address denoted by Program Counter and execute it.

1. A Process Control Block(PCB) does not contain which of the following?
a) Code
b) Stack
c) Bootstrap program
d) Data
Answer: c
Explanation: Process Control Block (PCB) contains information related to a process such as Process State, Program Counter, CPU Register, etc. Process Control Block is also known as Task Control Block. Bootstrap program is a program which runs initially when the system or computer is booted or rebooted.

2. The number of processes completed per unit time is known as __________
a) Output
b) Throughput
c) Efficiency
d) Capacity
Answer: b
Explanation: The number of processes completed per unit time is known as Throughput. Suppose there are 4 processes A, B, C & D they are taking 1, 3, 4 & 7 units of time respectively for their executions. For 10 units of time, throughput is high if process A, B & C are running first as 3 processes can execute. If process C runs first then throughput is low as maximum only 2 processes can execute. Throughput is low for processes which take a long time for execution. Throughput is high for processes which take a short time for execution.

3. The state of a process is defined by __________
a) the final activity of the process
b) the activity just executed by the process
c) the activity to next be executed by the process
d) the current activity of the process
Answer: d
Explanation: The state of a process is defined by the current activity of the process. A process state changes when the process executes. The process states are as New, Ready, Running, Wait, Terminated.

4. Which of the following is not the state of a process?
a) New
b) Old
c) Waiting
d) Running
Answer: b
Explanation: There is no process state such as old. When a process is created then the process is in New state. When the process gets the CPU for its execution then the process is in Running state. When the process is waiting for an external event then the process is in a Waiting state.

5. What is a Process Control Block?
a) Process type variable
b) Data Structure
c) A secondary storage section
d) A Block in memory
Answer: b
Explanation: A Process Control Block (PCB) is a data structure. It contains information related to a process such as Process State, Program Counter, CPU Register, etc. Process Control Block is also known as Task Control Block.


6. The entry of all the PCBs of the current processes is in __________
a) Process Register
b) Program Counter
c) Process Table
d) Process Unit
Answer: c
Explanation: The entry of all the PCBs of the current processes is in Process Table. The Process Table has the status of each and every process that is created in OS along with their PIDs.

7. What is the degree of multiprogramming?
a) the number of processes executed per unit time
b) the number of processes in the ready queue
c) the number of processes in the I/O queue
d) the number of processes in memory
Answer: d
Explanation: Multiprogramming means the number of processes are in the ready states. To increase utilization of CPU, Multiprogramming is one of the most important abilities of OS. Generally, a single process cannot use CPU or I/O at all time, whenever CPU or I/O is available another process can use it. By doing this CPU utilization is increased.

8. A single thread of control allows the process to perform __________
a) only one task at a time
b) multiple tasks at a time
c) only two tasks at a time
d) all of the mentioned
Answer: a
Explanation: A single thread of control allows the process to perform only one task at a time. In the case of multi-core, multiple threads can be run simultaneously and can perform multiple tasks at a time.

9. What is the objective of multiprogramming?
a) Have a process running at all time
b) Have multiple programs waiting in a queue ready to run
c) To increase CPU utilization
d) None of the mentioned
Answer: c
Explanation: The objective of multiprogramming is to increase CPU utilization. Generally, a single process cannot use CPU or I/O at all time, whenever CPU or I/O is available another process can use it. Multiprogramming offers this ability to OS by keeping multiple programs in a ready queue.

1. Which of the following do not belong to queues for processes?
a) Job Queue
b) PCB queue
c) Device Queue
d) Ready Queue
Answer: b
Explanation: PCB queue does not belong to queues for processes. PCB is a process control block which contains information related to process. Each process is represented by PCB.

2. When the process issues an I/O request __________
a) It is placed in an I/O queue
b) It is placed in a waiting queue
c) It is placed in the ready queue
d) It is placed in the Job queue
Answer: a
Explanation: When the process issues an I/O request it is placed in an I/O queue. I/O is a resource and it should be used effectively and every process should get access to it. There might be multiple processes which requested for I/O. Depending on scheduling algorithm I/O is allocated to any particular process and after completing I/O operation, I/O access is returned to the OS.

3. What will happen when a process terminates?
a) It is removed from all queues
b) It is removed from all, but the job queue
c) Its process control block is de-allocated
d) Its process control block is never de-allocated
Answer: a
Explanation: When a process terminates, it removes from all queues. All allocated resources to that particular process are deallocated and all those resources are returned back to OS.


4. What is a long-term scheduler?
a) It selects processes which have to be brought into the ready queue
b) It selects processes which have to be executed next and allocates CPU
c) It selects processes which heave to remove from memory by swapping
d) None of the mentioned
Answer: a
Explanation: A long-term scheduler selects processes which have to be brought into the ready queue. When processes enter the system, they are put in the job queue. Long-term scheduler selects processes from the job queue and puts them in the ready queue. It is also known as Job Scheduler.

5. If all processes I/O bound, the ready queue will almost always be ______ and the Short term Scheduler will have a ______ to do.
a) full, little
b) full, lot
c) empty, little
d) empty, lot
Answer: c
Explanation: If all processes are I/O bound, the ready queue will almost empty and the short-term scheduler will have a little to do. I/O bound processes spend more time doing I/O than computation.



6. What is a medium-term scheduler?
a) It selects which process has to be brought into the ready queue
b) It selects which process has to be executed next and allocates CPU
c) It selects which process to remove from memory by swapping
d) None of the mentioned
Answer: c
Explanation: A medium-term scheduler selects which process to remove from memory by swapping. The medium-term scheduler swapped out the process and later swapped in. Swapping helps to free up memory.

7. What is a short-term scheduler?
a) It selects which process has to be brought into the ready queue
b) It selects which process has to be executed next and allocates CPU
c) It selects which process to remove from memory by swapping
d) None of the mentioned
Answer: b
Explanation: A short-term scheduler selects a process which has to be executed next and allocates CPU. Short-term scheduler selects a process from the ready queue. It selects processes frequently.

8. The primary distinction between the short term scheduler and the long term scheduler is __________
a) The length of their queues
b) The type of processes they schedule
c) The frequency of their execution
d) None of the mentioned
Answer: c
Explanation: The primary distinction between the short-term scheduler and the long-term scheduler is the frequency of their execution. The short-term scheduler executes frequently while the long-term scheduler executes much less frequently.

9. The only state transition that is initiated by the user process itself is __________
a) block
b) wakeup
c) dispatch
d) none of the mentioned
Answer: a
Explanation: The only state transition that is initiated by the user process itself is block. Whenever a user process initiates an I/O request it goes into block state unless and until the I/O request is not completed.

10. In a time-sharing operating system, when the time slot given to a process is completed, the process goes from the running state to the __________
a) Blocked state
b) Ready state
c) Suspended state
d) Terminated state
Answer: b
Explanation: In a time-sharing operating system, when the time slot given to a process is completed, the process goes from the running state to the Ready State. In a time-sharing operating system unit time is defined for sharing CPU, it is called a time quantum or time slice. If a process takes less than 1 time quantum, then the process itself releases the CPU.

11. In a multiprogramming environment __________
a) the processor executes more than one process at a time
b) the programs are developed by more than one person
c) more than one process resides in the memory
d) a single user can execute many programs at the same time
Answer: c
Explanation: In a multiprogramming environment more than one process resides in the memory. Whenever a CPU is available, one process amongst all present in memory gets the CPU for execution. Multiprogramming increases CPU utilization.

12. Suppose that a process is in “Blocked” state waiting for some I/O service. When the service is completed, it goes to the __________
a) Running state
b) Ready state
c) Suspended state
d) Terminated state
Answer: b
Explanation: Suppose that a process is in “Blocked” state waiting for some I/O service. When the service is completed, it goes to the ready state. Process never goes directly to the running state from the waiting state. Only processes which are in ready state go to the running state whenever CPU allocated by operating system.

13. The context of a process in the PCB of a process does not contain __________
a) the value of the CPU registers
b) the process state
c) memory-management information
d) context switch time
Answer: d
Explanation: The context of a process in the PCB of a process does not contain context switch time. When switching CPU from one process to another, the current context of the process needs to be saved. It includes values of the CPU registers, process states, memory-management information.

14. Which of the following need not necessarily be saved on a context switch between processes?
a) General purpose registers
b) Translation lookaside buffer
c) Program counter
d) All of the mentioned
Answer: b
Explanation: Translation Look-aside Buffer (TLB) need not necessarily be saved on a context switch between processes. A special, small, fast-lookup hardware cache is called Translation Look-aside Buffer. TLB used to reduce memory access time.

15. Which of the following does not interrupt a running process?
a) A device
b) Timer
c) Scheduler process
d) Power failure
Answer: c
Explanation: Scheduler process does not interrupt a running process. Scheduler process selects an available process from a pool of available processes and allocates CPU to it.

1. Which process can be affected by other processes executing in the system?
a) cooperating process
b) child process
c) parent process
d) init process
Answer: a
Explanation: A cooperating process can be affected by other processes executing in the system. Also it can affect other processes executing in the system. A process shares data with other processes, such a process is known as a cooperating process.

2. When several processes access the same data concurrently and the outcome of the execution depends on the particular order in which the access takes place is called ________
a) dynamic condition
b) race condition
c) essential condition
d) critical condition
Answer: b
Explanation: When several processes access the same data concurrently and the outcome of the execution depends on the particular order in which access takes place is called race condition.

3. If a process is executing in its critical section, then no other processes can be executing in their critical section. What is this condition called?
a) mutual exclusion
b) critical exclusion
c) synchronous exclusion
d) asynchronous exclusion
Answer: a
Explanation: If a process is executing in its critical section, then no other processes can be executed in their critical section. This condition is called Mutual Exclusion. Critical section of the process is shared between multiple processes. If this section is executed by more than one or all of them concurrently then the outcome of this is not as per desired outcome. For this reason the critical section of the process should not be executed concurrently.



4. Which one of the following is a synchronization tool?
a) thread
b) pipe
c) semaphore
d) socket
Answer: c
Explanation: Semaphore is a synchronization tool. Semaphore is a mechanism which synchronizes or controls access of threads on critical resources. There are two types of semaphores i) Binary Semaphore ii) Counting Semaphore.

5. A semaphore is a shared integer variable __________
a) that can not drop below zero
b) that can not be more than zero
c) that can not drop below one
d) that can not be more than one
Answer: a
Explanation: A semaphore is a shared integer variable that can not drop below zero. In binary semaphore, if the value of the semaphore variable is zero that means there is a process that uses a critical resource and no other process can access the same critical resource until it is released. In Counting semaphore, if the value of the semaphore variable is zero that means there is no resource available.


1. Mutual exclusion can be provided by the __________
a) mutex locks
b) binary semaphores
c) both mutex locks and binary semaphores
d) none of the mentioned
Answer: c
Explanation: Mutual exclusion can be provided by both mutex locks and binary semaphore. Mutex is a short form of **Mut**ual **Ex**clusion. Binary semaphore also provides a mechanism for mutual exclusion. Binary semaphore behaves similar to mutex locks.

7. When high priority task is indirectly preempted by medium priority task effectively inverting the relative priority of the two tasks, the scenario is called __________
a) priority inversion
b) priority removal
c) priority exchange
d) priority modification
Answer: a
Explanation: When a high priority task is indirectly preempted by a medium priority task effectively inverting the relative priority of the two tasks, the scenario is called priority inversion.

8. Process synchronization can be done on __________
a) hardware level
b) software level
c) both hardware and software level
d) none of the mentioned
Answer: c
Explanation: Process synchronization can be done on both hardware and software level. Critical section problems can be resolved using hardware synchronisation. But this method is not simple for implementation so software synchronization is mostly used.

9. A monitor is a module that encapsulates __________
a) shared data structures
b) procedures that operate on shared data structure
c) synchronization between concurrent procedure invocation
d) all of the mentioned
Answer: d
Explanation: A monitor is a module that encapsulates shared data structures, procedures that operate on shared data structure, synchronization between concurrent procedure invocation.

10. To enable a process to wait within the monitor __________
a) a condition variable must be declared as condition
b) condition variables must be used as boolean objects
c) semaphore must be used
d) all of the mentioned
Answer: a
Explanation: To enable a process to wait within the monitor a condition variable must be declared as condition.

1. Restricting the child process to a subset of the parent’s resources prevents any process from __________
a) overloading the system by using a lot of secondary storage
b) under-loading the system by very less CPU utilization
c) overloading the system by creating a lot of sub-processes
d) crashing the system by utilizing multiple resources
Answer: c
Explanation: Restricting the child process to a subset of the parent’s resources prevents any process from overloading the system by creating a lot of sub-processes. A process creates a child process, child process requires certain resources to complete its task. A child process can demand required resources directly from the system, but by doing this system will be overloaded. So to avoid overloading of the system, the parent process shares its resources among children.

2. A parent process calling _____ system call will be suspended until children processes terminate.
a) wait
b) fork
c) exit
d) exec
Answer: a
Explanation: A parent process calling wait system call will be suspended until children processes terminate. A parameter is passed to wait system call which will obtain exit status of child as well as wait system call returns PID of terminated process.

3. Cascading termination refers to termination of all child processes if the parent process terminates ______
a) Normally
b) Abnormally
c) Normally or abnormally
d) None of the mentioned
Answer: c
Explanation: Cascading termination refers to termination of all child processes if the parent process terminates Normally or Abnormally. Some systems don’t allow child processes to exist if the parent process has terminated. Cascading termination is normally initiated by the operating system.



4. With _____________ only one process can execute at a time; meanwhile all other process are waiting for the processor. With ______________ more than one process can be running simultaneously each on a different processor.
a) Multiprocessing, Multiprogramming
b) Multiprogramming, Uniprocessing
c) Multiprogramming, Multiprocessing
d) Uniprogramming, Multiprocessing
Answer: d
Explanation: With Uniprogramming only one process can execute at a time; meanwhile all other processes are waiting for the processor. With Multiprocessing more than one process can run simultaneously each on different processors. The Uniprogramming system has only one program inside the core while the Multiprocessing system has multiple processes inside multiple cores. The core is one which executes instructions and stores data locally into registers.

5. In UNIX, each process is identified by its __________
a) Process Control Block
b) Device Queue
c) Process Identifier
d) None of the mentioned
Answer: c
Explanation: In Unix, each process is identified by its Process Identifier or PID. The PID provides unique value to each process in the system so that each process can be identified uniquely.



6. In UNIX, the return value for the fork system call is _____ for the child process and _____ for the parent process.
a) A Negative integer, Zero
b) Zero, A Negative integer
c) Zero, A nonzero integer
d) A nonzero integer, Zero
Answer: c
Explanation: In Unix, the return value of the fork system call is Zero for the child process and Non-zero value for parent process. A fork system call returns the PID of a newly created (child) process to the parent and returns Zero to that newly created (child) process.

7. The child process can __________
a) be a duplicate of the parent process
b) never be a duplicate of the parent process
c) cannot have another program loaded into it
d) never have another program loaded into it
Answer: a
Explanation: The child process can be a duplicate of the parent process. The child process created by fork consists of a copy of the address space of the parent process.

8. The child process completes execution, but the parent keeps executing, then the child process is known as __________
a) Orphan
b) Zombie
c) Body
d) Dead
Answer: b
Explanation: The child process completes execution, but the parent keeps executing, then the child process is known as Zombie. When a child process terminates, its resources get deallocated but its entry in the Process Control Block (PCB) remains there until its parent calls wait system call.

1. What is Interprocess communication?
a) allows processes to communicate and synchronize their actions when using the same address space
b) allows processes to communicate and synchronize their actions
c) allows the processes to only synchronize their actions without communication
d) none of the mentioned
Answer: b
Explanation: Interprocess Communication allows processes to communicate and synchronize their actions. Interprocess Communication (IPC) mechanism is used by cooperating processes to exchange data and information.
There are two models of IPC:
→ Shared Memory
→ Message Passing

2. Message passing system allows processes to __________
a) communicate with each other without sharing the same address space
b) communicate with one another by resorting to shared data
c) share data
d) name the recipient or sender of the message
Answer: a
Explanation: Message Passing system allows processes to communicate with each other without sharing the same address space.

3. Which of the following two operations are provided by the IPC facility?
a) write & delete message
b) delete & receive message
c) send & delete message
d) receive & send message
Answer: d
Explanation: Two operations provided by the IPC facility are receive and send messages. Exchange of data takes place in cooperating processes.


4. Messages sent by a process __________
a) have to be of a fixed size
b) have to be a variable size
c) can be fixed or variable sized
d) none of the mentioned
Answer: c
Explanation: Messages sent by a process can be fixed or variable size. If the message size of the process is fixed then system level implementation is straightforward but it makes the task of programming more difficult. If the message size of the process is variable then system level implementation is more complex but it makes the task of programming simpler.

5. The link between two processes P and Q to send and receive messages is called __________
a) communication link
b) message-passing link
c) synchronization link
d) all of the mentioned
Answer: a
Explanation: The link between two processes P and Q to send and receive messages is called communication link. Two processes P and Q want to communicate with each other; there should be a communication link that must exist between these two processes so that both processes can able to send and receive messages using that link.



6. Which of the following are TRUE for direct communication?
a) A communication link can be associated with N number of process(N = max. number of processes supported by system)
b) A communication link is associated with exactly two processes
c) Exactly N/2 links exist between each pair of processes(N = max. number of processes supported by system)
d) Exactly two link exists between each pair of processes
Answer: b
Explanation: For direct communication, a communication link is associated with exactly two processes. One communication link must exist between a pair of processes.

7. In indirect communication between processes P and Q __________
a) there is another process R to handle and pass on the messages between P and Q
b) there is another machine between the two processes to help communication
c) there is a mailbox to help communication between P and Q
d) none of the mentioned
Answer: c
Explanation: In indirect communication between processes P and Q there is a mailbox to help communication between P and Q. A mailbox can be viewed abstractly as an object into which messages can be placed by processes and from which messages can be removed.

8. In the non blocking send __________
a) the sending process keeps sending until the message is received
b) the sending process sends the message and resumes operation
c) the sending process keeps sending until it receives a message
d) none of the mentioned
Answer: b
Explanation: In the non blocking send, the sending process sends the message and resumes operation. Sending process doesn’t care about reception. It is also known as asynchronous send.

9. In the Zero capacity queue __________
a) the queue can store at least one message
b) the sender blocks until the receiver receives the message
c) the sender keeps sending and the messages don’t wait in the queue
d) none of the mentioned
Answer: b
Explanation: In the Zero capacity queue the sender blocks until the receiver receives the message. Zero capacity queue has maximum capacity of Zero; thus message queue does not have any waiting message in it.

10. The Zero Capacity queue __________
a) is referred to as a message system with buffering
b) is referred to as a message system with no buffering
c) is referred to as a link
d) none of the mentioned
Answer: b
Explanation: The Zero capacity queue is referred to as a message system with no buffering. Zero capacity queue has maximum capacity of Zero; thus message queue does not have any waiting message in it.

11. Bounded capacity and Unbounded capacity queues are referred to as __________
a) Programmed buffering
b) Automatic buffering
c) User defined buffering
d) No buffering
Answer: b
Explanation: Bounded capacity and Unbounded capacity queues are referred to as Automatic buffering. Buffer capacity of the Bounded capacity queue is finite length and buffer capacity of the Unbounded queue is infinite.

1. Which module gives control of the CPU to the process selected by the short-term scheduler?
a) dispatcher
b) interrupt
c) scheduler
d) none of the mentioned
Answer: a
Explanation: None.

2. The processes that are residing in main memory and are ready and waiting to execute are kept on a list called _____________
a) job queue
b) ready queue
c) execution queue
d) process queue
Answer: b
Explanation: None.

3. The interval from the time of submission of a process to the time of completion is termed as ____________
a) waiting time
b) turnaround time
c) response time
d) throughput
Answer: b
Explanation: None.


4. Which scheduling algorithm allocates the CPU first to the process that requests the CPU first?
a) first-come, first-served scheduling
b) shortest job scheduling
c) priority scheduling
d) none of the mentioned
Answer: a
Explanation: None.

5. In priority scheduling algorithm ____________
a) CPU is allocated to the process with highest priority
b) CPU is allocated to the process with lowest priority
c) Equal priority processes can not be scheduled
d) None of the mentioned
Answer: a
Explanation: None.



1. In priority scheduling algorithm, when a process arrives at the ready queue, its priority is compared with the priority of ____________
a) all process
b) currently running process
c) parent process
d) init process
Answer: b
Explanation: None.

7. Which algorithm is defined in Time quantum?
a) shortest job scheduling algorithm
b) round robin scheduling algorithm
c) priority scheduling algorithm
d) multilevel queue scheduling algorithm
Answer: b
Explanation: None.

8. Process are classified into different groups in ____________
a) shortest job scheduling algorithm
b) round robin scheduling algorithm
c) priority scheduling algorithm
d) multilevel queue scheduling algorithm
Answer: d
Explanation: None.

9. In multilevel feedback scheduling algorithm ____________
a) a process can move to a different classified ready queue
b) classification of ready queue is permanent
c) processes are not classified into groups
d) none of the mentioned
Answer: a
Explanation: None.

10. Which one of the following can not be scheduled by the kernel?
a) kernel level thread
b) user level thread
c) process
d) none of the mentioned
Answer: b
Explanation: User level threads are managed by thread library and the kernel is unaware of them.

1. CPU scheduling is the basis of ___________
a) multiprocessor systems
b) multiprogramming operating systems
c) larger memory sized systems
d) none of the mentioned
Answer: b
Explanation: None.

2. With multiprogramming ______ is used productively.
a) time
b) space
c) money
d) all of the mentioned
Answer: a
Explanation: None.

3. What are the two steps of a process execution?
a) I/O & OS Burst
b) CPU & I/O Burst
c) Memory & I/O Burst
d) OS & Memory Burst
Answer: b
Explanation: None.

4. An I/O bound program will typically have ____________
a) a few very short CPU bursts
b) many very short I/O bursts
c) many very short CPU bursts
d) a few very short I/O bursts
Answer: c
Explanation: None.

5. A process is selected from the ______ queue by the ________ scheduler, to be executed.
a) blocked, short term
b) wait, long term
c) ready, short term
d) ready, long term
Answer: c
Explanation: None.


6. In the following cases non – preemptive scheduling occurs?
a) When a process switches from the running state to the ready state
b) When a process goes from the running state to the waiting state
c) When a process switches from the waiting state to the ready state
d) All of the mentioned
Answer: b
Explanation: There is no other choice.

7. The switching of the CPU from one process or thread to another is called ____________
a) process switch
b) task switch
c) context switch
d) all of the mentioned
Answer: d
Explanation: None.

8. What is Dispatch latency?
a) the speed of dispatching a process from running to the ready state
b) the time of dispatching a process from running to ready state and keeping the CPU idle
c) the time to stop one process and start running another one
d) none of the mentioned
Answer: c
Explanation: None.

9. Scheduling is done so as to ____________
a) increase CPU utilization
b) decrease CPU utilization
c) keep the CPU more idle
d) none of the mentioned
Answer: a
Explanation: None.

10. Scheduling is done so as to ____________
a) increase the throughput
b) decrease the throughput
c) increase the duration of a specific amount of work
d) none of the mentioned
Answer: a
Explanation: None.

11. What is Turnaround time?
a) the total waiting time for a process to finish execution
b) the total time spent in the ready queue
c) the total time spent in the running queue
d) the total time from the completion till the submission of a process
Answer: d
Explanation: None.

12. Scheduling is done so as to ____________
a) increase the turnaround time
b) decrease the turnaround time
c) keep the turnaround time same
d) there is no relation between scheduling and turnaround time
Answer: b
Explanation: None.

13. What is Waiting time?
a) the total time in the blocked and waiting queues
b) the total time spent in the ready queue
c) the total time spent in the running queue
d) the total time from the completion till the submission of a process
Answer: b
Explanation: None.

14. Scheduling is done so as to ____________
a) increase the waiting time
b) keep the waiting time the same
c) decrease the waiting time
d) none of the mentioned
Answer: c
Explanation: None.

15. What is Response time?
a) the total time taken from the submission time till the completion time
b) the total time taken from the submission time till the first response is produced
c) the total time taken from submission time till the response is output
d) none of the mentioned
Answer: b
Explanation: None.

1. Round robin scheduling falls under the category of ____________
a) Non-preemptive scheduling
b) Preemptive scheduling
c) All of the mentioned
d) None of the mentioned
Answer: b
Explanation: None.

2. With round robin scheduling algorithm in a time shared system ____________
a) using very large time slices converts it into First come First served scheduling algorithm
b) using very small time slices converts it into First come First served scheduling algorithm
c) using extremely small time slices increases performance
d) using very small time slices converts it into Shortest Job First algorithm
Answer: a
Explanation: All the processes will be able to get completed.

3. The portion of the process scheduler in an operating system that dispatches processes is concerned with ____________
a) assigning ready processes to CPU
b) assigning ready processes to waiting queue
c) assigning running processes to blocked queue
d) all of the mentioned
Answer: a
Explanation: None.


4. Complex scheduling algorithms ____________
a) are very appropriate for very large computers
b) use minimal resources
c) use many resources
d) all of the mentioned
Answer: a
Explanation: Large computers are overloaded with a greater number of processes.

5. What is FIFO algorithm?
a) first executes the job that came in last in the queue
b) first executes the job that came in first in the queue
c) first executes the job that needs minimal processor
d) first executes the job that has maximum processor needs
Answer: b
Explanation: None.



6. The strategy of making processes that are logically runnable to be temporarily suspended is called ____________
a) Non preemptive scheduling
b) Preemptive scheduling
c) Shortest job first
d) First come First served
Answer: b
Explanation: None.

7. What is Scheduling?
a) allowing a job to use the processor
b) making proper use of processor
c) all of the mentioned
d) none of the mentioned
Answer: a
Explanation: None.

8. There are 10 different processes running on a workstation. Idle processes are waiting for an input event in the input queue. Busy processes are scheduled with the Round-Robin time sharing method. Which out of the following quantum times is the best value for small response times, if the processes have a short runtime, e.g. less than 10ms?
a) tQ = 15ms
b) tQ = 40ms
c) tQ = 45ms
d) tQ = 50ms
Answer: a
Explanation: None.

9. Orders are processed in the sequence they arrive if _______ rule sequences the jobs.
a) earliest due date
b) slack time remaining
c) first come, first served
d) critical ratio
Answer: c
Explanation: None.

10. Which of the following algorithms tends to minimize the process flow time?
a) First come First served
b) Shortest Job First
c) Earliest Deadline First
d) Longest Job First
Answer: b
Explanation: None.

11. Under multiprogramming, turnaround time for short jobs is usually ________ and that for long jobs is slightly ___________
a) Lengthened; Shortened
b) Shortened; Lengthened
c) Shortened; Shortened
d) Shortened; Unchanged
Answer: b
Explanation: None.

12. Which of the following statements are true? (GATE 2010)

```
I. Shortest remaining time first scheduling may cause starvation
II. Preemptive scheduling may cause starvation
III. Round robin is better than FCFS in terms of response time
```

a) I only
b) I and III only
c) II and III only
d) I, II and III
Answer: d
Explanation: I) Shortest remaining time first scheduling is a preemptive version of shortest job scheduling. It may cause starvation as shorter processes may keep coming and a long CPU burst process never gets CPU.
II) Preemption may cause starvation. If priority based scheduling with preemption is used, then a low priority process may never get CPU.
III) Round Robin Scheduling improves response time as all processes get CPU after a specified time.

1. Which is the most optimal scheduling algorithm?
a) FCFS – First come First served
b) SJF – Shortest Job First
c) RR – Round Robin
d) None of the mentioned
Answer: b
Explanation: None.

2. The real difficulty with SJF in short term scheduling is ____________
a) it is too good an algorithm
b) knowing the length of the next CPU request
c) it is too complex to understand
d) none of the mentioned
Answer: b
Explanation: None.

3. The FCFS algorithm is particularly troublesome for ____________
a) time sharing systems
b) multiprogramming systems
c) multiprocessor systems
d) operating systems
Answer: b
Explanation: In a time sharing system, each user needs to get a share of the CPU at regular intervals.



4. Consider the following set of processes, the length of the CPU burst time given in milliseconds.

```
   Process    Burst time
    P1           6
    P2           8
    P3           7
    P4           3
```

Assuming the above process being scheduled with the SJF scheduling algorithm.
a) The waiting time for process P1 is 3ms
b) The waiting time for process P1 is 0ms
c) The waiting time for process P1 is 16ms
d) The waiting time for process P1 is 9ms
Answer: a
Explanation: None.



5. Preemptive Shortest Job First scheduling is sometimes called ____________
a) Fast SJF scheduling
b) EDF scheduling – Earliest Deadline First
c) HRRN scheduling – Highest Response Ratio Next
d) SRTN scheduling – Shortest Remaining Time Next
Answer: d
Explanation: None.

6. An SJF algorithm is simply a priority algorithm where the priority is ____________
a) the predicted next CPU burst
b) the inverse of the predicted next CPU burst
c) the current CPU burst
d) anything the user wants
Answer: a
Explanation: The larger the CPU burst, the lower the priority.

7. Choose one of the disadvantages of the priority scheduling algorithm?
a) it schedules in a very complex manner
b) its scheduling takes up a lot of time
c) it can lead to some low priority process waiting indefinitely for the CPU
d) none of the mentioned
Answer: c
Explanation: None.

8. What is ‘Aging’?
a) keeping track of cache contents
b) keeping track of what pages are currently residing in memory
c) keeping track of how many times a given page is referenced
d) increasing the priority of jobs to ensure termination in a finite time
Answer: d
Explanation: None.

9. A solution to the problem of indefinite blockage of low – priority processes is ____________
a) Starvation
b) Wait queue
c) Ready queue
d) Aging
Answer: d
Explanation: None.

10. Which of the following statements are true? (GATE 2010)

```
i) Shortest remaining time first scheduling may cause starvation
ii) Preemptive scheduling may cause starvation
iii) Round robin is better than FCFS in terms of response time
```

a) i only
b) i and iii only
c) ii and iii only
d) i, ii and iii
Answer: d
Explanation: None.

11. Which of the following scheduling algorithms gives minimum average waiting time?
a) FCFS
b) SJF
c) Round – robin
d) Priority
Answer: b
Explanation: None.

1. Concurrent access to shared data may result in ____________
a) data consistency
b) data insecurity
c) data inconsistency
d) none of the mentioned
Answer: c
Explanation: None.

2. A situation where several processes access and manipulate the same data concurrently and the outcome of the execution depends on the particular order in which access takes place is called ____________
a) data consistency
b) race condition
c) aging
d) starvation
Answer: b
Explanation: None.

3. The segment of code in which the process may change common variables, update tables, write into files is known as ____________
a) program
b) critical section
c) non – critical section
d) synchronizing
Answer: b
Explanation: None.



4. Which of the following conditions must be satisfied to solve the critical section problem?
a) Mutual Exclusion
b) Progress
c) Bounded Waiting
d) All of the mentioned
Answer: d
Explanation: None.

5. Mutual exclusion implies that ____________
a) if a process is executing in its critical section, then no other process must be executing in their critical sections
b) if a process is executing in its critical section, then other processes must be executing in their critical sections
c) if a process is executing in its critical section, then all the resources of the system must be blocked until it finishes execution
d) none of the mentioned
Answer: a
Explanation: None.


6. Bounded waiting implies that there exists a bound on the number of times a process is allowed to enter its critical section ____________
a) after a process has made a request to enter its critical section and before the request is granted
b) when another process is in its critical section
c) before a process has made a request to enter its critical section
d) none of the mentioned
Answer: a
Explanation: None.

7. A minimum of _____ variable(s) is/are required to be shared between processes to solve the critical section problem.
a) one
b) two
c) three
d) four
Answer: b
Explanation: None.

8. In the bakery algorithm to solve the critical section problem ____________
a) each process is put into a queue and picked up in an ordered manner
b) each process receives a number (may or may not be unique) and the one with the lowest number is served next
c) each process gets a unique number and the one with the highest number is served next
d) each process gets a unique number and the one with the lowest number is served next
Answer: b
Explanation: None.

1. An un-interruptible unit is known as ____________
a) single
b) atomic
c) static
d) none of the mentioned
Answer: b
Explanation: None.

2. TestAndSet instruction is executed ____________
a) after a particular process
b) periodically
c) atomically
d) none of the mentioned
Answer: c
Explanation: None.

3. Semaphore is a/an _______ to solve the critical section problem.
a) hardware for a system
b) special program for a system
c) integer variable
d) none of the mentioned
Answer: c
Explanation: None.

4. What are the two atomic operations permissible on semaphores?
a) wait
b) stop
c) hold
d) none of the mentioned
Answer: a
Explanation: None.

5. What are Spinlocks?
a) CPU cycles wasting locks over critical sections of programs
b) Locks that avoid time wastage in context switches
c) Locks that work better on multiprocessor systems
d) All of the mentioned
Answer: d
Explanation: None.


6. What is the main disadvantage of spinlocks?
a) they are not sufficient for many process
b) they require busy waiting
c) they are unreliable sometimes
d) they are too complex for programmers
Answer: b
Explanation: None.

7. The wait operation of the semaphore basically works on the basic _______ system call.
a) stop()
b) block()
c) hold()
d) wait()
Answer: b
Explanation: None.

8. The signal operation of the semaphore basically works on the basic _______ system call.
a) continue()
b) wakeup()
c) getup()
d) start()
Answer: b
Explanation: None.

9. If the semaphore value is negative ____________
a) its magnitude is the number of processes waiting on that semaphore
b) it is invalid
c) no operation can be further performed on it until the signal operation is performed on it
d) none of the mentioned
Answer: a
Explanation: None.

10. The code that changes the value of the semaphore is ____________
a) remainder section code
b) non – critical section code
c) critical section code
d) none of the mentioned
Answer: c
Explanation: None.

9. Semaphores are mostly used to implement ____________
a) System calls
b) IPC mechanisms
c) System protection
d) None of the mentioned
Answer: b
Explanation: None.

10. Spinlocks are intended to provide __________ only.
a) Mutual Exclusion
b) Bounded Waiting
c) Aging
d) Progress
Answer: b
Explanation: None.

1. What will happen if a non-recursive mutex is locked more than once?
a) Starvation
b) Deadlock
c) Aging
d) Signaling
Answer: b
Explanation: If a thread which had already locked a mutex, tries to lock the mutex again, it will enter into the waiting list of that mutex, which results in a deadlock. It is because no other thread can unlock the mutex.

2. What is a semaphore?
a) is a binary mutex
b) must be accessed from only one process
c) can be accessed from multiple processes
d) none of the mentioned
Answer: c
Explanation: None.

3. What are the two kinds of semaphores?
a) mutex & counting
b) binary & counting
c) counting & decimal
d) decimal & binary
Answer: b
Explanation: None.


4. What is a mutex?
a) is a binary mutex
b) must be accessed from only one process
c) can be accessed from multiple processes
d) none of the mentioned
Answer: b
Explanation: None.

5. At a particular time of computation the value of a counting semaphore is 7.Then 20 P operations and 15 V operations were completed on this semaphore. The resulting value of the semaphore is? (GATE 1987)
a) 42
b) 2
c) 7
d) 12
Answer: b
Explanation: P represents Wait and V represents Signal. P operation will decrease the value by 1 every time and V operation will increase the value by 1 every time.



6. A binary semaphore is a semaphore with integer values ____________
a) 1
b) -1
c) 0.8
d) 0.5
Answer: a
Explanation: None.

1. The bounded buffer problem is also known as ____________
a) Readers – Writers problem
b) Dining – Philosophers problem
c) Producer – Consumer problem
d) None of the mentioned
Answer: c
Explanation: None.

2. In the bounded buffer problem, there are the empty and full semaphores that ____________
a) count the number of empty and full buffers
b) count the number of empty and full memory spaces
c) count the number of empty and full queues
d) none of the mentioned
Answer: a
Explanation: None.

3. In the bounded buffer problem ____________
a) there is only one buffer
b) there are n buffers ( n being greater than one but finite)
c) there are infinite buffers
d) the buffer size is bounded
Answer: b
Explanation: None.


4. To ensure difficulties do not arise in the readers – writers problem _______ are given exclusive access to the shared object.
a) readers
b) writers
c) readers and writers
d) none of the mentioned
Answer: b
Explanation: None.

5. The dining – philosophers problem will occur in case of ____________
a) 5 philosophers and 5 chopsticks
b) 4 philosophers and 5 chopsticks
c) 3 philosophers and 5 chopsticks
d) 6 philosophers and 5 chopsticks
Answer: a
Explanation: None.

Become [Top Ranker in Operating System](https://rank.sanfoundry.com/top-rankers-operating-system/) Now!

6. A deadlock free solution to the dining philosophers problem ____________
a) necessarily eliminates the possibility of starvation
b) does not necessarily eliminate the possibility of starvation
c) eliminates any possibility of any kind of problem further
d) none of the mentioned
Answer: b
Explanation: None.

1. A monitor is a type of ____________
a) semaphore
b) low level synchronization construct
c) high level synchronization construct
d) none of the mentioned
Answer: c
Explanation: None.

2. A monitor is characterized by ____________
a) a set of programmer defined operators
b) an identifier
c) the number of variables in it
d) all of the mentioned
Answer: a
Explanation: None.

3. A procedure defined within a ________ can access only those variables declared locally within the _______ and its formal parameters.
a) process, semaphore
b) process, monitor
c) semaphore, semaphore
d) monitor, monitor
Answer: d
Explanation: None.



4. The monitor construct ensures that ____________
a) only one process can be active at a time within the monitor
b) n number of processes can be active at a time within the monitor (n being greater than 1)
c) the queue has only one process in it at a time
d) all of the mentioned
Answer: a
Explanation: None.

5. What are the operations that can be invoked on a condition variable?
a) wait & signal
b) hold & wait
c) signal & hold
d) continue & signal
Answer: a
Explanation: None.


6. Which is the process of invoking the wait operation?
a) suspended until another process invokes the signal operation
b) waiting for another process to complete before it can itself call the signal operation
c) stopped until the next process in the queue finishes execution
d) none of the mentioned
Answer: a
Explanation: None.

7. If no process is suspended, the signal operation ____________
a) puts the system into a deadlock state
b) suspends some default process execution
c) nothing happens
d) the output is unpredictable
Answer: c
Explanation: None.

1. What is a reusable resource?
a) that can be used by one process at a time and is not depleted by that use
b) that can be used by more than one process at a time
c) that can be shared between various threads
d) none of the mentioned
Answer: a
Explanation: None.

2. Which of the following condition is required for a deadlock to be possible?
a) mutual exclusion
b) a process may hold allocated resources while awaiting assignment of other resources
c) no resource can be forcibly removed from a process holding it
d) all of the mentioned
Answer: d
Explanation: None.

3. A system is in the safe state if ____________
a) the system can allocate resources to each process in some order and still avoid a deadlock
b) there exist a safe sequence
c) all of the mentioned
d) none of the mentioned
Answer: a
Explanation: None.



4. The circular wait condition can be prevented by ____________
a) defining a linear ordering of resource types
b) using thread
c) using pipes
d) all of the mentioned
Answer: a
Explanation: None.

5. Which one of the following is the deadlock avoidance algorithm?
a) banker’s algorithm
b) round-robin algorithm
c) elevator algorithm
d) karn’s algorithm
Answer: a
Explanation: None.


6. What is the drawback of banker’s algorithm?
a) in advance processes rarely know how much resource they will need
b) the number of processes changes as time progresses
c) resource once available can disappear
d) all of the mentioned
Answer: d
Explanation: None.

7. For an effective operating system, when to check for deadlock?
a) every time a resource request is made
b) at fixed time intervals
c) every time a resource request is made at fixed time intervals
d) none of the mentioned
Answer: c
Explanation: None.

8. A problem encountered in multitasking when a process is perpetually denied necessary resources is called ____________
a) deadlock
b) starvation
c) inversion
d) aging
9. Which one of the following is a visual ( mathematical ) way to determine the deadlock occurrence?
a) resource allocation graph
b) starvation graph
c) inversion graph
d) none of the mentioned
Answer: a
Explanation: None.

10. To avoid deadlock ____________
a) there must be a fixed number of resources to allocate
b) resource allocation must be done only once
c) all deadlocked processes must be aborted
d) inversion technique can be used
Answer: a
Explanation: None

. The number of resources requested by a process ____________
a) must always be less than the total number of resources available in the system
b) must always be equal to the total number of resources available in the system
c) must not exceed the total number of resources available in the system
d) must exceed the total number of resources available in the system
Answer: c
Explanation: None.

2. The request and release of resources are ___________
a) command line statements
b) interrupts
c) system calls
d) special programs
Answer: c
Explanation: None.

3. What are Multithreaded programs?
a) lesser prone to deadlocks
b) more prone to deadlocks
c) not at all prone to deadlocks
d) none of the mentioned
Answer: b
Explanation: Multiple threads can compete for shared resources.



4. For a deadlock to arise, which of the following conditions must hold simultaneously?
a) Mutual exclusion
b) No preemption
c) Hold and wait
d) All of the mentioned
Answer: d
Explanation: None.

5. For Mutual exclusion to prevail in the system ____________
a) at least one resource must be held in a non sharable mode
b) the processor must be a uniprocessor rather than a multiprocessor
c) there must be at least one resource in a sharable mode
d) all of the mentioned
Answer: a
Explanation: If another process requests that resource (non – shareable resource), the requesting process must be delayed until the resource has been released.



6. For a Hold and wait condition to prevail ____________
a) A process must be not be holding a resource, but waiting for one to be freed, and then request to acquire it
b) A process must be holding at least one resource and waiting to acquire additional resources that are being held by other processes
c) A process must hold at least one resource and not be waiting to acquire additional resources
d) None of the mentioned
Answer: b
Explanation: None.

7. Deadlock prevention is a set of methods ____________
a) to ensure that at least one of the necessary conditions cannot hold
b) to ensure that all of the necessary conditions do not hold
c) to decide if the requested resources for a process have to be given or not
d) to recover from a deadlock
Answer: a
Explanation: None.

8. For non sharable resources like a printer, mutual exclusion ____________
a) must exist
b) must not exist
c) may exist
d) none of the mentioned
Answer: a
Explanation: A printer cannot be simultaneously shared by several processes.

9. For sharable resources, mutual exclusion ____________
a) is required
b) is not required
c) may be or may not be required
d) none of the mentioned
Answer: b
Explanation: They do not require mutually exclusive access, and hence cannot be involved in a deadlock.

10. To ensure that the hold and wait condition never occurs in the system, it must be ensured that ____________
a) whenever a resource is requested by a process, it is not holding any other resources
b) each process must request and be allocated all its resources before it begins its execution
c) a process can request resources only when it has none
d) all of the mentioned
Answer: d
Explanation: c – A process may request some resources and use them. Before it can can request any additional resources, however it must release all the resources that it is currently allocated.

11. The disadvantage of a process being allocated all its resources before beginning its execution is ____________
a) Low CPU utilization
b) Low resource utilization
c) Very high resource utilization
d) None of the mentioned
Answer: b
Explanation: None.

12. To ensure no preemption, if a process is holding some resources and requests another resource that cannot be immediately allocated to it ____________
a) then the process waits for the resources be allocated to it
b) the process keeps sending requests until the resource is allocated to it
c) the process resumes execution without the resource being allocated to it
d) then all resources currently being held are preempted
Answer: d
Explanation: None.

13. One way to ensure that the circular wait condition never holds is to ____________
a) impose a total ordering of all resource types and to determine whether one precedes another in the ordering
b) to never let a process acquire resources that are held by other processes
c) to let a process wait for only one resource at a time
d) all of the mentioned
Answer: a
Explanation: None.

1. Each request requires that the system consider the _____________ to decide whether the current request can be satisfied or must wait to avoid a future possible deadlock.
a) resources currently available
b) processes that have previously been in the system
c) resources currently allocated to each process
d) future requests and releases of each process
Answer: a
Explanation: None.

2. Given a priori information about the ________ number of resources of each type that maybe requested for each process, it is possible to construct an algorithm that ensures that the system will never enter a deadlock state.
a) minimum
b) average
c) maximum
d) approximate
Answer: c
Explanation: None.

3. A deadlock avoidance algorithm dynamically examines the __________ to ensure that a circular wait condition can never exist.
a) resource allocation state
b) system storage state
c) operating system
d) resources
Answer: a
Explanation: Resource allocation states are used to maintain the availability of the already and current available resources.


4. A state is safe, if ____________
a) the system does not crash due to deadlock occurrence
b) the system can allocate resources to each process in some order and still avoid a deadlock
c) the state keeps the system protected and safe
d) all of the mentioned
Answer: b
Explanation: None.

5. A system is in a safe state only if there exists a ____________
a) safe allocation
b) safe resource
c) safe sequence
d) all of the mentioned
Answer: c
Explanation: None.



6. All unsafe states are ____________
a) deadlocks
b) not deadlocks
c) fatal
d) none of the mentioned
Answer: b
Explanation: None.

7. A system has 12 magnetic tape drives and 3 processes : P0, P1, and P2. Process P0 requires 10 tape drives, P1 requires 4 and P2 requires 9 tape drives.

```
Process    
P0            
P1                             
P2                             
 
Maximum needs (process-wise: P0 through P2 top to bottom)    
10             
4   
9
 
Currently allocated (process-wise)
5
2
2
```

Which of the following sequence is a safe sequence?
a) P0, P1, P2
b) P1, P2, P0
c) P2, P0, P1
d) P1, P0, P2
8. If no cycle exists in the resource allocation graph ____________
a) then the system will not be in a safe state
b) then the system will be in a safe state
c) all of the mentioned
d) none of the mentioned
Answer: b
Explanation: None.

9. The resource allocation graph is not applicable to a resource allocation system ____________
a) with multiple instances of each resource type
b) with a single instance of each resource type
c) single & multiple instances of each resource type
d) none of the mentioned
Answer: a
Explanation: None.

10. The Banker’s algorithm is _____________ than the resource allocation graph algorithm.
a) less efficient
b) more efficient
c) equal
d) none of the mentioned
Answer: a
Explanation: None.

11. The data structures available in the Banker’s algorithm are ____________
a) Available
b) Need
c) Allocation
d) All of the mentioned
Answer: d
Explanation: None.

12. The content of the matrix Need is ____________
a) Allocation – Available
b) Max – Available
c) Max – Allocation
d) Allocation – Max
Answer: c
Explanation: None.

1. The wait-for graph is a deadlock detection algorithm that is applicable when ____________
a) all resources have a single instance
b) all resources have multiple instances
c) all resources have a single 7 multiple instances
d) all of the mentioned
2. An edge from process Pi to Pj in a wait for graph indicates that ____________
a) Pi is waiting for Pj to release a resource that Pi needs
b) Pj is waiting for Pi to release a resource that Pj needs
c) Pi is waiting for Pj to leave the system
d) Pj is waiting for Pi to leave the system
3. If the wait for graph contains a cycle ____________
a) then a deadlock does not exist
b) then a deadlock exists
c) then the system is in a safe state
d) either deadlock exists or system is in a safe state


4. If deadlocks occur frequently, the detection algorithm must be invoked ________
a) rarely
b) frequently
c) rarely & frequently
d) none of the mentioned
5. What is the disadvantage of invoking the detection algorithm for every request?
a) overhead of the detection algorithm due to consumption of memory
b) excessive time consumed in the request to be allocated memory
c) considerable overhead in computation time
d) all of the mentioned

6. A deadlock eventually cripples system throughput and will cause the CPU utilization to ______
a) increase
b) drop
c) stay still
d) none of the mentioned
Answer: b
Explanation: None.

7. Every time a request for allocation cannot be granted immediately, the detection algorithm is invoked. This will help identify ____________
a) the set of processes that have been deadlocked
b) the set of processes in the deadlock queue
c) the specific process that caused the deadlock
d) all of the mentioned
Answer: a
Explanation: None.

8. A computer system has 6 tape drives, with ‘n’ processes competing for them. Each process may need 3 tape drives. The maximum value of ‘n’ for which the system is guaranteed to be deadlock free is?
a) 2
b) 3
c) 4
d) 1
Answer: a
Explanation: None.

9. A system has 3 processes sharing 4 resources. If each process needs a maximum of 2 units then, deadlock ____________
a) can never occur
b) may occur
c) has to occur
d) none of the mentioned
Answer: a
Explanation: None.

10. ‘m’ processes share ‘n’ resources of the same type. The maximum need of each process doesn’t exceed ‘n’ and the sum of all their maximum needs is always less than m+n. In this setup, deadlock ____________
a) can never occur
b) may occur
c) has to occur
d) none of the mentioned
Answer: a
Explanation: None.

1. A deadlock can be broken by ____________
a) abort one or more processes to break the circular wait
b) abort all the process in the system
c) preempt all resources from all processes
d) none of the mentioned
Answer: a
Explanation: None.

2. The two ways of aborting processes and eliminating deadlocks are ____________
a) Abort all deadlocked processes
b) Abort all processes
c) Abort one process at a time until the deadlock cycle is eliminated
d) All of the mentioned
Answer: c
Explanation: None.

3. Those processes should be aborted on occurrence of a deadlock, the termination of which?
a) is more time consuming
b) incurs minimum cost
c) safety is not hampered
d) all of the mentioned
Answer: b
Explanation: None.

4. The process to be aborted is chosen on the basis of the following factors?
a) priority of the process
b) process is interactive or batch
c) how long the process has computed
d) all of the mentioned
Answer: d
Explanation: None.

5. Cost factors for process termination include ____________
a) Number of resources the deadlock process is not holding
b) CPU utilization at the time of deadlock
c) Amount of time a deadlocked process has thus far consumed during its execution
d) All of the mentioned
Answer: c
Explanation: None.


6. If we preempt a resource from a process, the process cannot continue with its normal execution and it must be ____________
a) aborted
b) rolled back
c) terminated
d) queued
Answer: b
Explanation: None.

7. To _______ to a safe state, the system needs to keep more information about the states of processes.
a) abort the process
b) roll back the process
c) queue the process
d) none of the mentioned
Answer: b
Explanation: None.

8. If the resources are always preempted from the same process __________ can occur.
a) deadlock
b) system crash
c) aging
d) starvation
Answer: d
Explanation: None.

9. What is the solution to starvation?
a) the number of rollbacks must be included in the cost factor
b) the number of resources must be included in resource preemption
c) resource preemption be done instead
d) all of the mentioned
Answer: a
Explanation: None.

1. What is Address Binding?
a) going to an address in memory
b) locating an address with the help of another address
c) binding two addresses together to form a new address in a different memory space
d) a mapping from one address space to another
Answer: d
Explanation: None.

2. Binding of instructions and data to memory addresses can be done at ____________
a) Compile time
b) Load time
c) Execution time
d) All of the mentioned
Answer: d
Explanation: None.

3. If the process can be moved during its execution from one memory segment to another, then binding must be ____________
a) delayed until run time
b) preponed to compile time
c) preponed to load time
d) none of the mentioned
Answer: a
Explanation: None.


4. What is Dynamic loading?
a) loading multiple routines dynamically
b) loading a routine only when it is called
c) loading multiple routines randomly
d) none of the mentioned
Answer: b
Explanation: None.

5. What is the advantage of dynamic loading?
a) A used routine is used multiple times
b) An unused routine is never loaded
c) CPU utilization increases
d) All of the mentioned
Answer: b
Explanation: None.



6. The idea of overlays is to ____________
a) data that are needed at any given time
b) enable a process to be larger than the amount of memory allocated to it
c) keep in memory only those instructions
d) all of the mentioned
Answer: d
Explanation: None.

7. The ___________ must design and program the overlay structure.
a) programmer
b) system architect
c) system designer
d) none of the mentioned
Answer: a
Explanation: None.

8. The ___________ swaps processes in and out of the memory.
a) Memory manager
b) CPU
c) CPU manager
d) User
Answer: a
Explanation: None.

9. If a higher priority process arrives and wants service, the memory manager can swap out the lower priority process to execute the higher priority process. When the higher priority process finishes, the lower priority process is swapped back in and continues execution. This variant of swapping is sometimes called?
a) priority swapping
b) pull out, push in
c) roll out, roll in
d) none of the mentioned
Answer: c
Explanation: None.

10. If binding is done at assembly or load time, then the process _____ be moved to different locations after being swapped out and in again.
a) can
b) must
c) can never
d) may
Answer: c
Explanation: None.

11. In a system that does not support swapping ____________
a) the compiler normally binds symbolic addresses (variables) to relocatable addresses
b) the compiler normally binds symbolic addresses to physical addresses
c) the loader binds relocatable addresses to physical addresses
d) binding of symbolic addresses to physical addresses normally takes place during execution
Answer: a
Explanation: None.

12. Which of the following is TRUE?
a) Overlays are used to increase the size of physical memory
b) Overlays are used to increase the logical address space
c) When overlays are used, the size of a process is not limited to the size of the physical memory
d) Overlays are used whenever the physical address space is smaller than the logical address space
Answer: c
Explanation: None.

1. What is Address Binding?
a) going to an address in memory
b) locating an address with the help of another address
c) binding two addresses together to form a new address in a different memory space
d) a mapping from one address space to another
Answer: d
Explanation: None.

2. Binding of instructions and data to memory addresses can be done at ____________
a) Compile time
b) Load time
c) Execution time
d) All of the mentioned
Answer: d
Explanation: None.

3. If the process can be moved during its execution from one memory segment to another, then binding must be ____________
a) delayed until run time
b) preponed to compile time
c) preponed to load time
d) none of the mentioned
Answer: a
Explanation: None.


4. What is Dynamic loading?
a) loading multiple routines dynamically
b) loading a routine only when it is called
c) loading multiple routines randomly
d) none of the mentioned
Answer: b
Explanation: None.

5. What is the advantage of dynamic loading?
a) A used routine is used multiple times
b) An unused routine is never loaded
c) CPU utilization increases
d) All of the mentioned
Answer: b
Explanation: None.



6. The idea of overlays is to ____________
a) data that are needed at any given time
b) enable a process to be larger than the amount of memory allocated to it
c) keep in memory only those instructions
d) all of the mentioned
Answer: d
Explanation: None.

7. The ___________ must design and program the overlay structure.
a) programmer
b) system architect
c) system designer
d) none of the mentioned
Answer: a
Explanation: None.

8. The ___________ swaps processes in and out of the memory.
a) Memory manager
b) CPU
c) CPU manager
d) User
Answer: a
Explanation: None.

9. If a higher priority process arrives and wants service, the memory manager can swap out the lower priority process to execute the higher priority process. When the higher priority process finishes, the lower priority process is swapped back in and continues execution. This variant of swapping is sometimes called?
a) priority swapping
b) pull out, push in
c) roll out, roll in
d) none of the mentioned
Answer: c
Explanation: None.

10. If binding is done at assembly or load time, then the process _____ be moved to different locations after being swapped out and in again.
a) can
b) must
c) can never
d) may
Answer: c
Explanation: None.

11. In a system that does not support swapping ____________
a) the compiler normally binds symbolic addresses (variables) to relocatable addresses
b) the compiler normally binds symbolic addresses to physical addresses
c) the loader binds relocatable addresses to physical addresses
d) binding of symbolic addresses to physical addresses normally takes place during execution
Answer: a
Explanation: None.

12. Which of the following is TRUE?
a) Overlays are used to increase the size of physical memory
b) Overlays are used to increase the logical address space
c) When overlays are used, the size of a process is not limited to the size of the physical memory
d) Overlays are used whenever the physical address space is smaller than the logical address space
Answer: c
Explanation: None.

1. CPU fetches the instruction from memory according to the value of ____________
a) program counter
b) status register
c) instruction register
d) program status word
Answer: a
Explanation: None.

2. A memory buffer used to accommodate a speed differential is called ____________
a) stack pointer
b) cache
c) accumulator
d) disk buffer
Answer: b
Explanation: None.

3. Which one of the following is the address generated by CPU?
a) physical address
b) absolute address
c) logical address
d) none of the mentioned
Answer: c
Explanation: None.

4. Run time mapping from virtual to physical address is done by ____________
a) Memory management unit
b) CPU
c) PCI
d) None of the mentioned
Answer: a
Explanation: None.

5. Memory management technique in which system stores and retrieves data from secondary storage for use in main memory is called?
a) fragmentation
b) paging
c) mapping
d) none of the mentioned
Answer: b
Explanation: None.


6. The address of a page table in memory is pointed by ____________
a) stack pointer
b) page table base register
c) page register
d) program counter
Answer: b
Explanation: None.

7. Program always deals with ____________
a) logical address
b) absolute address
c) physical address
d) relative address
Answer: a
Explanation: None.

8. The page table contains ____________
a) base address of each page in physical memory
b) page offset
c) page size
d) none of the mentioned
Answer: a
Explanation: None.

9. What is compaction?
a) a technique for overcoming internal fragmentation
b) a paging technique
c) a technique for overcoming external fragmentation
d) a technique for overcoming fatal error
Answer: c
Explanation: None.

10. Operating System maintains the page table for ____________
a) each process
b) each thread
c) each instruction
d) each address
Answer: a
Explanation: None.

1. The main memory accommodates ____________
a) operating system
b) cpu
c) user processes
d) all of the mentioned
Answer: a
Explanation: None.

2. What is the operating system?
a) in the low memory
b) in the high memory
c) either low or high memory (depending on the location of interrupt vector)
d) none of the mentioned
Answer: c
Explanation: None.

3. In contiguous memory allocation ____________
a) each process is contained in a single contiguous section of memory
b) all processes are contained in a single contiguous section of memory
c) the memory space is contiguous
d) none of the mentioned
Answer: a
Explanation: None.



4. The relocation register helps in ____________
a) providing more address space to processes
b) a different address space to processes
c) to protect the address spaces of processes
d) none of the mentioned
Answer: c
Explanation: None.

5. With relocation and limit registers, each logical address must be _______ the limit register.
a) less than
b) equal to
c) greater than
d) none of the mentioned
Answer: a
Explanation: None.


6. The operating system and the other processes are protected from being modified by an already running process because ____________
a) they are in different memory spaces
b) they are in different logical addresses
c) they have a protection algorithm
d) every address generated by the CPU is being checked against the relocation and limit registers
Answer: d
Explanation: None.

7. Transient operating system code is code that ____________
a) is not easily accessible
b) comes and goes as needed
c) stays in the memory always
d) never enters the memory space
Answer: b
Explanation: None.

8. Using transient code, _______ the size of the operating system during program execution.
a) increases
b) decreases
c) changes
d) maintains
Answer: c
Explanation: None.

9. When memory is divided into several fixed sized partitions, each partition may contain ________
a) exactly one process
b) at least one process
c) multiple processes at once
d) none of the mentioned
Answer: a
Explanation: None.

10. In fixed size partition, the degree of multiprogramming is bounded by ___________
a) the number of partitions
b) the CPU utilization
c) the memory size
d) all of the mentioned
Answer: a
Explanation: None

11. The first fit, best fit and worst fit are strategies to select a ______
a) process from a queue to put in memory
b) processor to run the next process
c) free hole from a set of available holes
d) all of the mentioned
Answer: c
Explanation: None.

1. In internal fragmentation, memory is internal to a partition and ____________
a) is being used
b) is not being used
c) is always used
d) none of the mentioned
Answer: b
Explanation: None.

2. A solution to the problem of external fragmentation is ____________
a) compaction
b) larger memory space
c) smaller memory space
d) none of the mentioned
Answer: a
Explanation: None.

3. Another solution to the problem of external fragmentation problem is to ____________
a) permit the logical address space of a process to be noncontiguous
b) permit smaller processes to be allocated memory at last
c) permit larger processes to be allocated memory at last
d) all of the mentioned
Answer: a
Explanation: None.

4. If relocation is static and is done at assembly or load time, compaction _________
a) cannot be done
b) must be done
c) must not be done
d) can be done
Answer: a
Explanation: None.

5. The disadvantage of moving all process to one end of memory and all holes to the other direction, producing one large hole of available memory is ____________
a) the cost incurred
b) the memory used
c) the CPU used
d) all of the mentioned
Answer: a
Explanation: None.


6. __________ is generally faster than _________ and _________
a) first fit, best fit, worst fit
b) best fit, first fit, worst fit
c) worst fit, best fit, first fit
d) none of the mentioned
Answer: a
Explanation: None.

7. External fragmentation exists when?
a) enough total memory exists to satisfy a request but it is not contiguous
b) the total memory is insufficient to satisfy a request
c) a request cannot be satisfied even when the total memory is free
d) none of the mentioned
Answer: a
Explanation: None.

8. External fragmentation will not occur when?
a) first fit is used
b) best fit is used
c) worst fit is used
d) no matter which algorithm is used, it will always occur
Answer: d
Explanation: None.

9. Sometimes the overhead of keeping track of a hole might be ____________
a) larger than the memory
b) larger than the hole itself
c) very small
d) all of the mentioned
Answer: b
Explanation: None.

10. When the memory allocated to a process is slightly larger than the process, then ____________
a) internal fragmentation occurs
b) external fragmentation occurs
c) both internal and external fragmentation occurs
d) neither internal nor external fragmentation occurs
Answer: a
Explanation: None.

1. Physical memory is broken into fixed-sized blocks called ________
a) frames
b) pages
c) backing store
d) none of the mentioned
Answer: a
Explanation: None.

2. Logical memory is broken into blocks of the same size called _________
a) frames
b) pages
c) backing store
d) none of the mentioned
Answer: b
Explanation: None.

3. Every address generated by the CPU is divided into two parts. They are ____________
a) frame bit & page number
b) page number & page offset
c) page offset & frame bit
d) frame offset & page offset
Answer: b
Explanation: None.


4. The __________ is used as an index into the page table.
a) frame bit
b) page number
c) page offset
d) frame offset
Answer: b
Explanation: None.

5. The _____ table contains the base address of each page in physical memory.
a) process
b) memory
c) page
d) frame
Answer: c
Explanation: None.



6. The size of a page is typically ____________
a) varied
b) power of 2
c) power of 4
d) none of the mentioned
Answer: b
Explanation: None.

7. If the size of logical address space is 2 to the power of m, and a page size is 2 to the power of n addressing units, then the high order _____ bits of a logical address designate the page number, and the ____ low order bits designate the page offset.
a) m, n
b) n, m
c) m – n, m
d) m – n, n
Answer: d
Explanation: None.

8. With paging there is no ________ fragmentation.
a) internal
b) external
c) either type of
d) none of the mentioned
Answer: b
Explanation: None.

9. The operating system maintains a ______ table that keeps track of how many frames have been allocated, how many are there, and how many are available.
a) page
b) mapping
c) frame
d) memory
Answer: c
Explanation: None.

10. Paging increases the ______ time.
a) waiting
b) execution
c) context – switch
d) all of the mentioned
Answer: c
Explanation: None.

11. Smaller page tables are implemented as a set of _______
a) queues
b) stacks
c) counters
d) registers
Answer: d
Explanation: None.

12. The page table registers should be built with _______
a) very low speed logic
b) very high speed logic
c) a large memory space
d) none of the mentioned
Answer: b
Explanation: None.

13. For larger page tables, they are kept in main memory and a __________ points to the page table.
a) page table base register
b) page table base pointer
c) page table register pointer
d) page table base
Answer: a
Explanation: None.

14. For every process there is a __________
a) page table
b) copy of page table
c) pointer to page table
d) all of the mentioned
Answer: a
Explanation: None.

15. Time taken in memory access through PTBR is ____________
a) extended by a factor of 3
b) extended by a factor of 2
c) slowed by a factor of 3
d) slowed by a factor of 2
Answer: d
Explanation: None.

1. Each entry in a translation lookaside buffer (TLB) consists of ____________
a) key
b) value
c) bit value
d) constant
Answer: a
Explanation: None.

2. If a page number is not found in the TLB, then it is known as a ____________
a) TLB miss
b) Buffer miss
c) TLB hit
d) All of the mentioned
Answer: a
Explanation: None.

3. An ______ uniquely identifies processes and is used to provide address space protection for that process.
a) address space locator
b) address space identifier
c) address process identifier
d) none of the mentioned
Answer: b
Explanation: None.



4. The percentage of times a page number is found in the TLB is known as ____________
a) miss ratio
b) hit ratio
c) miss percent
d) none of the mentioned
Answer: b
Explanation: None.

5. Memory protection in a paged environment is accomplished by ____________
a) protection algorithm with each page
b) restricted access rights to users
c) restriction on page visibility
d) protection bit with each page
Answer: d
Explanation: None.



6. When the valid – invalid bit is set to valid, it means that the associated page ____________
a) is in the TLB
b) has data in it
c) is in the process’s logical address space
d) is the system’s physical address space
Answer: c
Explanation: None.

7. Illegal addresses are trapped using the _____ bit.
a) error
b) protection
c) valid – invalid
d) access
Answer: c
Explanation: None.

8. When there is a large logical address space, the best way of paging would be ____________
a) not to page
b) a two level paging algorithm
c) the page table itself
d) all of the mentioned
Answer: b
Explanation: None.

9. In a paged memory, the page hit ratio is 0.35. The required to access a page in secondary memory is equal to 100 ns. The time required to access a page in primary memory is 10 ns. The average time required to access a page is?
a) 3.0 ns
b) 68.0 ns
c) 68.5 ns
d) 78.5 ns
Answer: c
Explanation: None.

10. To obtain better memory utilization, dynamic loading is used. With dynamic loading, a routine is not loaded until it is called. For implementing dynamic loading ____________
a) special support from hardware is required
b) special support from operating system is essential
c) special support from both hardware and operating system is essential
d) user programs can implement dynamic loading without any special support from hardware or operating system
Answer: d
Explanation: None.

11. In paged memory systems, if the page size is increased, then the internal fragmentation generally ____________
a) becomes less
b) becomes more
c) remains constant
d) none of the mentioned
Answer: b
Explanation: None.

1. Because of virtual memory, the memory can be shared among ____________
a) processes
b) threads
c) instructions
d) none of the mentioned
Answer: a
Explanation: None.

2. _____ is the concept in which a process is copied into the main memory from the secondary memory according to the requirement.
a) Paging
b) Demand paging
c) Segmentation
d) Swapping
Answer: b
Explanation: None.

3. The pager concerns with the ____________
a) individual page of a process
b) entire process
c) entire thread
d) first page of a process
Answer: a
Explanation: None.



4. Swap space exists in ____________
a) primary memory
b) secondary memory
c) cpu
d) none of the mentioned
Answer: b
Explanation: None.

5. When a program tries to access a page that is mapped in address space but not loaded in physical memory, then ____________
a) segmentation fault occurs
b) fatal error occurs
c) page fault occurs
d) no error occurs
Answer: c
Explanation: None.


6. Effective access time is directly proportional to ____________
a) page-fault rate
b) hit ratio
c) memory access time
d) none of the mentioned
Answer: a
Explanation: None.

7. In FIFO page replacement algorithm, when a page must be replaced ____________
a) oldest page is chosen
b) newest page is chosen
c) random page is chosen
d) none of the mentioned
Answer: a
Explanation: None.

8. Which algorithm chooses the page that has not been used for the longest period of time whenever the page required to be replaced?
a) first in first out algorithm
b) additional reference bit algorithm
c) least recently used algorithm
d) counting based page replacement algorithm
Answer: c
Explanation: None.

9. A process is thrashing if ____________
a) it is spending more time paging than executing
b) it is spending less time paging than executing
c) page fault occurs
d) swapping can not take place
Answer: a
Explanation: None.

10. Working set model for page replacement is based on the assumption of ____________
a) modularity
b) locality
c) globalization
d) random access
Answer: b
Explanation: None.

1. Which of the following page replacement algorithms suffers from Belady’s Anomaly?
a) Optimal replacement
b) LRU
c) FIFO
d) Both optimal replacement and FIFO
Answer: c
Explanation: None.

2. A process refers to 5 pages, A, B, C, D, E in the order : A, B, C, D, A, B, E, A, B, C, D, E. If the page replacement algorithm is FIFO, the number of page transfers with an empty internal store of 3 frames is?
a) 8
b) 10
c) 9
d) 7
Answer: c
Explanation: None.

3. A process refers to 5 pages, A, B, C, D, E in the order : A, B, C, D, A, B, E, A, B, C, D, E. If the page replacement algorithm is FIFO, the number of page frames is increased to 4, then the number of page transfers ____________
a) decreases
b) increases
c) remains the same
d) none of the mentioned
Answer: b
Explanation: None.

4. A memory page containing a heavily used variable that was initialized very early and is in constant use is removed, then the page replacement algorithm used is ____________
a) LRU
b) LFU
c) FIFO
d) None of the mentioned
Answer: c
Explanation: None.

5. A virtual memory system uses First In First Out (FIFO) page replacement policy and allocates a fixed number of frames to a process. Consider the following statements.
P : Increasing the number of page frames allocated to a process sometimes increases the page fault rate
Q : Some programs do not exhibit locality of reference
Which of the following is TRUE?
a) Both P and Q are true, and Q is the reason for P
b) Both P and Q are true, but Q is not the reason for P
c) P is false but Q is true
d) Both P and Q are false
Answer: c
Explanation: None.


6. Users _______ that their processes are running on a paged system.
a) are aware
b) are unaware
c) may unaware
d) none of the mentioned
Answer: b
Explanation: None.

7. If no frames are free, _____ page transfer(s) is/are required.
a) one
b) two
c) three
d) four
Answer: b
Explanation: None.

8. When a page is selected for replacement, and its modify bit is set ____________
a) the page is clean
b) the page has been modified since it was read in from the disk
c) the page is dirty
d) the page has been modified since it was read in from the disk & page is dirty
Answer: d
Explanation: None.

9. The aim of creating page replacement algorithms is to ____________
a) replace pages faster
b) increase the page fault rate
c) decrease the page fault rate
d) to allocate multiple pages to processes
Answer: c
Explanation: None.

10. A FIFO replacement algorithm associates with each page the _______
a) time it was brought into memory
b) size of the page in memory
c) page after and before it
d) all of the mentioned
Answer: a
Explanation: None.

11. What is the Optimal page – replacement algorithm?
a) Replace the page that has not been used for a long time
b) Replace the page that has been used for a long time
c) Replace the page that will not be used for a long time
d) None of the mentioned
Answer: c
Explanation: None.

12. Optimal page – replacement algorithm is difficult to implement, because ____________
a) it requires a lot of information
b) it requires future knowledge of the reference string
c) it is too complex
d) it is extremely expensive
Answer: b
Explanation: None.

13. LRU page – replacement algorithm associates with each page the ______
a) time it was brought into memory
b) the time of that page’s last use
c) page after and before it
d) all of the mentioned
Answer: b
Explanation: None.

14. For 3 page frames, the following is the reference string:
7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1
How many page faults does the LRU page replacement algorithm produce?
a) 10
b) 15
c) 11
d) 12
Answer: d
Explanation: None.

15. What are the two methods of the LRU page replacement policy that can be implemented in hardware?
a) Counters
b) RAM & Registers
c) Stack & Counters
d) Registers
Answer: c
Explanation: None.

1. Which of the following page replacement algorithms suffers from Belady’s Anomaly?
a) Optimal replacement
b) LRU
c) FIFO
d) Both optimal replacement and FIFO
Answer: c
Explanation: None.

2. A process refers to 5 pages, A, B, C, D, E in the order : A, B, C, D, A, B, E, A, B, C, D, E. If the page replacement algorithm is FIFO, the number of page transfers with an empty internal store of 3 frames is?
a) 8
b) 10
c) 9
d) 7
Answer: c
Explanation: None.

3. A process refers to 5 pages, A, B, C, D, E in the order : A, B, C, D, A, B, E, A, B, C, D, E. If the page replacement algorithm is FIFO, the number of page frames is increased to 4, then the number of page transfers ____________
a) decreases
b) increases
c) remains the same
d) none of the mentioned
Answer: b
Explanation: None.

4. A memory page containing a heavily used variable that was initialized very early and is in constant use is removed, then the page replacement algorithm used is ____________
a) LRU
b) LFU
c) FIFO
d) None of the mentioned
Answer: c
Explanation: None.

5. A virtual memory system uses First In First Out (FIFO) page replacement policy and allocates a fixed number of frames to a process. Consider the following statements.
P : Increasing the number of page frames allocated to a process sometimes increases the page fault rate
Q : Some programs do not exhibit locality of reference
Which of the following is TRUE?
a) Both P and Q are true, and Q is the reason for P
b) Both P and Q are true, but Q is not the reason for P
c) P is false but Q is true
d) Both P and Q are false
Answer: c
Explanation: None.


6. Users _______ that their processes are running on a paged system.
a) are aware
b) are unaware
c) may unaware
d) none of the mentioned
Answer: b
Explanation: None.

7. If no frames are free, _____ page transfer(s) is/are required.
a) one
b) two
c) three
d) four
Answer: b
Explanation: None.

8. When a page is selected for replacement, and its modify bit is set ____________
a) the page is clean
b) the page has been modified since it was read in from the disk
c) the page is dirty
d) the page has been modified since it was read in from the disk & page is dirty
Answer: d
Explanation: None.

9. The aim of creating page replacement algorithms is to ____________
a) replace pages faster
b) increase the page fault rate
c) decrease the page fault rate
d) to allocate multiple pages to processes
Answer: c
Explanation: None.

10. A FIFO replacement algorithm associates with each page the _______
a) time it was brought into memory
b) size of the page in memory
c) page after and before it
d) all of the mentioned
Answer: a
Explanation: None.

11. What is the Optimal page – replacement algorithm?
a) Replace the page that has not been used for a long time
b) Replace the page that has been used for a long time
c) Replace the page that will not be used for a long time
d) None of the mentioned
Answer: c
Explanation: None.

12. Optimal page – replacement algorithm is difficult to implement, because ____________
a) it requires a lot of information
b) it requires future knowledge of the reference string
c) it is too complex
d) it is extremely expensive
Answer: b
Explanation: None.

13. LRU page – replacement algorithm associates with each page the ______
a) time it was brought into memory
b) the time of that page’s last use
c) page after and before it
d) all of the mentioned
Answer: b
Explanation: None.

14. For 3 page frames, the following is the reference string:
7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1
How many page faults does the LRU page replacement algorithm produce?
a) 10
b) 15
c) 11
d) 12
Answer: d
Explanation: None.

15. What are the two methods of the LRU page replacement policy that can be implemented in hardware?
a) Counters
b) RAM & Registers
c) Stack & Counters
d) Registers
Answer: c
Explanation: None.

1. ______ is a unique tag, usually a number identifies the file within the file system.
a) File identifier
b) File name
c) File type
d) None of the mentioned
Answer: a
Explanation: None.

2. To create a file ____________
a) allocate the space in file system
b) make an entry for new file in directory
c) allocate the space in file system & make an entry for new file in directory
d) none of the mentioned
Answer: c
Explanation: None.

3. By using the specific system call, we can ____________
a) open the file
b) read the file
c) write into the file
d) all of the mentioned
Answer: d
Explanation: None.

4. File type can be represented by ____________
a) file name
b) file extension
c) file identifier
d) none of the mentioned
Answer: b
Explanation: None.

5. Which file is a sequence of bytes organized into blocks understandable by the system’s linker?
a) object file
b) source file
c) executable file
d) text file
Answer: a
Explanation: None.


6. What is the mounting of file system?
a) crating of a filesystem
b) deleting a filesystem
c) attaching portion of the file system into a directory structure
d) removing the portion of the file system into a directory structure
Answer: c
Explanation: None.

7. Mapping of file is managed by ____________
a) file metadata
b) page table
c) virtual memory
d) file system
Answer: a
Explanation: None.

8. Mapping of network file system protocol to local file system is done by ____________
a) network file system
b) local file system
c) volume manager
d) remote mirror
Answer: a
Explanation: None.

9. Which one of the following explains the sequential file access method?
a) random access according to the given byte number
b) read bytes one at a time, in order
c) read/write sequentially by record
d) read/write randomly by record
Answer: b
Explanation: None.

10. When will file system fragmentation occur?
a) unused space or single file are not contiguous
b) used space is not contiguous
c) unused space is non-contiguous
d) multiple files are non-contiguous
Answer: a
Explanation: None.

1. Data cannot be written to secondary storage unless written within a ______
a) file
b) swap space
c) directory
d) text format
Answer: a
Explanation: None.

2. File attributes consist of ____________
a) name
b) type
c) identifier
d) all of the mentioned
Answer: d
Explanation: None.

3. The information about all files is kept in ____________
a) swap space
b) operating system
c) seperate directory structure
d) none of the mentioned
Answer: c
Explanation: None.

4. A file is a/an _______ data type.
a) abstract
b) primitive
c) public
d) private
Answer: a
Explanation: None.

5. The operating system keeps a small table containing information about all open files called ____________
a) system table
b) open-file table
c) file table
d) directory table
Answer: b
Explanation: None.


6. In UNIX, what will the open system call return?
a) pointer to the entry in the open file table
b) pointer to the entry in the system wide table
c) a file to the process calling it
d) none of the mentioned
Answer: a
Explanation: None.

7. System wide table in UNIX contains process independent information such as ____________
a) location of file on disk
b) access dates
c) file size
d) all of the mentioned
Answer: d
Explanation: None.

8. The open file table has a/an _______ associated with each file.
a) file content
b) file permission
c) open count
d) close count
Answer: c
Explanation: open count indicates the number of processes that have the file open.

9. Which of the following are the two parts of the file name?
a) name & identifier
b) identifier & type
c) extension & name
d) type & extension
Answer: c
Explanation: None.

1. The UNIX sytem uses a/an ________ stored at the beginning of a some files to indicate roughly the type of file.
a) identifier
b) extension
c) virtual number
d) magic number
Answer: d
Explanation: None.

2. The larger the block size, the ______ the internal fragmentation.
a) greater
b) lesser
c) same
d) none of the mentioned
Answer: a
Explanation: None.

3. In the sequential access method, information in the file is processed ____________
a) one disk after the other, record access doesnt matter
b) one record after the other
c) one text document after the other
d) none of the mentioned
Answer: b
Explanation: None.


4. Sequential access method ______ on random access devices.
a) works well
b) doesnt work well
c) maybe works well and doesnt work well
d) none of the mentioned
Answer: a
Explanation: None.

5. The direct access method is based on a ______ model of a file, as _____ allow random access to any file block.
a) magnetic tape, magnetic tapes
b) tape, tapes
c) disk, disks
d) all of the mentioned
Answer: c
Explanation: None.



6. For a direct access file ____________
a) there are restrictions on the order of reading and writing
b) there are no restrictions on the order of reading and writing
c) access is restricted permission wise
d) access is not restricted permission wise
Answer: b
Explanation: None.

7. A relative block number is an index relative to ____________
a) the beginning of the file
b) the end of the file
c) the last written position in file
d) none of the mentioned
Answer: a
Explanation: None.

8. The index contains ____________
a) names of all contents of file
b) pointers to each page
c) pointers to the various blocks
d) all of the mentioned
Answer: c
Explanation: None.

9. For large files, when the index itself becomes too large to be kept in memory?
a) index is called
b) an index is created for the index file
c) secondary index files are created
d) all of the mentioned
Answer: b
Explanation: None.

1. To organise file systems on disk _______________
a) they are split into one or more partitions
b) information about files is added to each partition
c) they are made on different storage spaces
d) all of the mentioned
Answer: b
Explanation: None.

2. The directory can be viewed as a _________ that translates file names into their directory entries.
a) symbol table
b) partition
c) swap space
d) cache
Answer: a
Explanation: None.

3. What will happen in the single level directory?
a) All files are contained in different directories all at the same level
b) All files are contained in the same directory
c) Depends on the operating system
d) None of the mentioned
Answer: b
Explanation: None.

4. What will happen in the single level directory?
a) all directories must have unique names
b) all files must have unique names
c) all files must have unique owners
d) all of the mentioned
Answer: b
Explanation: None.

5. What will happen in the two level directory structure?
a) each user has his/her own user file directory
b) the system doesn’t its own master file directory
c) all of the mentioned
d) none of the mentioned
Answer: a
Explanation: None.



6. When a user job starts in a two level directory system, or a user logs in _____________
a) the users user file directory is searched
b) the system’s master file directory is not searched
c) the master file directory is indexed by user name or account number, and each entry points to the UFD for that user
d) all of the mentioned
Answer: c
Explanation: None.

7. When a user refers to a particular file?
a) system MFD is searched
b) his own UFD is not searched
c) both MFD and UFD are searched
d) every directory is searched
Answer: c
Explanation: None.

8. What is the disadvantage of the two level directory structure?
a) it does not solve the name collision problem
b) it solves the name collision problem
c) it does not isolate users from one another
d) it isolates users from one another
Answer: d
Explanation: None.

9. In the tree structured directories _____________
a) the tree has the stem directory
b) the tree has the leaf directory
c) the tree has the root directory
d) all of the mentioned
Answer: c
Explanation: None.

10. The current directory contains, most of the files that are _____________
a) of current interest to the user
b) stored currently in the system
c) not used in the system
d) not of current interest to the system
Answer: a
Explanation: None.

11. Which of the following are the types of Path names?
a) absolute & relative
b) local & global
c) global & relative
d) relative & local
Answer: a
Explanation: None.

1. An absolute path name begins at the _____________
a) leaf
b) stem
c) current directory
d) root
Answer: d
Explanation: None.

2. A relative path name begins at the _____________
a) leaf
b) stem
c) current directory
d) root
Answer: c
Explanation: None.

3. In a tree structure, when deleting a directory that is not empty?
a) The contents of the directory are safe
b) The contents of the directory are also deleted
c) contents of the directory are not deleted
d) none of the mentioned
Answer: b
Explanation: None.


4. When two users keep a subdirectory in their own directories, the structure being referred to is _____________
a) tree structure
b) cyclic graph directory structure
c) two level directory structure
d) acyclic graph directory
Answer: d
Explanation: None.

5. A tree structure ______ the sharing of files and directories.
a) allows
b) may restrict
c) restricts
d) none of the mentioned
Answer: c
Explanation: None.

Become [Top Ranker in Operating System](https://rank.sanfoundry.com/top-rankers-operating-system/) Now!

6. With a shared file _____________
a) actual file exists
b) there are two copies of the file
c) the changes made by one person are not reflected to the other
d) the changes made by one person are reflected to the other
Answer: d
Explanation: None.

7. In UNIX, what is a link?
a) a directory entry
b) a pointer to another file or subdirectory
c) implemented as an absolute or relative path name
d) all of the mentioned
Answer: d
Explanation: None.

8. The operating system _______ the links when traversing directory trees, to preserve the acyclic structure of the system.
a) considers
b) ignores
c) deletes
d) none of the mentioned
Answer: b
Explanation: None.

9. The deletion of a link ________ the original file.
a) deletes
b) affects
c) does not affect
d) none of the mentioned
Answer: c
Explanation: None.

10. When keeping a list of all the links/references to a file, and the list is empty, implies that _____________
a) the file has no copies
b) the file is deleted
c) the file is hidden
d) none of the mentioned
Answer: b
Explanation: None.

11. When a cycle exists, the reference count maybe non zero, even when it is no longer possible to refer to a directory or file, due to _______
a) the possibility of one hidden reference
b) the possibility of two hidden references
c) the possibility of self referencing
d) none of the mentioned
Answer: c
Explanation: None.

1. The three major methods of allocating disk space that are in wide use are _____________
a) contiguous
b) linked
c) indexed
d) all of the mentioned
Answer: d
Explanation: None.

2. In contiguous allocation _____________
a) each file must occupy a set of contiguous blocks on the disk
b) each file is a linked list of disk blocks
c) all the pointers to scattered blocks are placed together in one location
d) none of the mentioned
Answer: a
Explanation: None.

3. In linked allocation _____________
a) each file must occupy a set of contiguous blocks on the disk
b) each file is a linked list of disk blocks
c) all the pointers to scattered blocks are placed together in one location
d) none of the mentioned
Answer: b
Explanation: None.



4. In indexed allocation _____________
a) each file must occupy a set of contiguous blocks on the disk
b) each file is a linked list of disk blocks
c) all the pointers to scattered blocks are placed together in one location
d) none of the mentioned
Answer: c
Explanation: None.

5. On systems where there are multiple operating system, the decision to load a particular one is done by _____________
a) boot loader
b) bootstrap
c) process control block
d) file control block
Answer: a
Explanation: None.


6. The VFS (virtual file system) activates file system specific operations to handle local requests according to their _______
a) size
b) commands
c) timings
d) file system types
Answer: d
Explanation: None.

7. What is the real disadvantage of a linear list of directory entries?
a) size of the linear list in memory
b) linear search to find a file
c) it is not reliable
d) all of the mentioned
Answer: b
Explanation: None.

8. Contiguous allocation of a file is defined by _____________
a) disk address of the first block & length
b) length & size of the block
c) size of the block
d) total size of the file
Answer: a
Explanation: None.

9. One difficulty of contiguous allocation is _____________
a) finding space for a new file
b) inefficient
c) costly
d) time taking
Answer: a
Explanation: None.

10. _______ and ________ are the most common strategies used to select a free hole from the set of available holes.
a) First fit, Best fit
b) Worst fit, First fit
c) Best fit, Worst fit
d) None of the mentioned
Answer: a
Explanation: None.

11. The first fit and best fit algorithms suffer from _____________
a) internal fragmentation
b) external fragmentation
c) starvation
d) all of the mentioned
Answer: b
Explanation: None.

12. To solve the problem of external fragmentation ________ needs to be done periodically.
a) compaction
b) check
c) formatting
d) replacing memory
Answer: a
Explanation: None.

13. If too little space is allocated to a file _____________
a) the file will not work
b) there will not be any space for the data, as the FCB takes it all
c) the file cannot be extended
d) the file cannot be opened
Answer: c
Explanation: None.

1. A device driver can be thought of like a translator. Its input consists of _____ commands and output consists of _______ instructions.
a) high level, low level
b) low level, high level
c) complex, simple
d) low level, complex
Answer: a
Explanation: None.

2. The file organization module knows about _____________
a) files
b) logical blocks of files
c) physical blocks of files
d) all of the mentioned
Answer: d
Explanation: None.

3. Metadata includes _____________
a) all of the file system structure
b) contents of files
c) both file system structure and contents of files
d) none of the mentioned
Answer: c
Explanation: None.



4. For each file there exists a ___________ that contains information about the file, including ownership, permissions and location of the file contents.
a) metadata
b) file control block
c) process control block
d) all of the mentioned
Answer: b
Explanation: None.

5. For processes to request access to file contents, they need _____________
a) to run a seperate program
b) special interrupts
c) to implement the open and close system calls
d) none of the mentioned
Answer: c
Explanation: None.



6. During compaction time, other normal system operations _______ be permitted.
a) can
b) cannot
c) is
d) none of the mentioned
Answer: b
Explanation: None.

7. When in contiguous allocation the space cannot be extended easily?
a) the contents of the file have to be copied to a new space, a larger hole
b) the file gets destroyed
c) the file will get formatted and lost all its data
d) none of the mentioned
Answer: a
Explanation: None.

8. In the linked allocation, the directory contains a pointer to which block?
I. first block
II. last block
a) I only
b) II only
c) Both I and II
d) Neither I nor II
Answer: c
Explanation: None.

9. There is no __________ with linked allocation.
a) internal fragmentation
b) external fragmentation
c) starvation
d) all of the mentioned
Answer: b
Explanation: None.

10. What is the major disadvantage with a linked allocation?
a) internal fragmentation
b) external fragmentation
c) there is no sequential access
d) there is only sequential access
Answer: d
Explanation: None.

11. What if a pointer is lost or damaged in a linked allocation?
a) the entire file could get damaged
b) only a part of the file would be affected
c) there would not be any problems
d) none of the mentioned
Answer: a
Explanation: None.

12. FAT stands for _____________
a) File Attribute Transport
b) File Allocation Table
c) Fork At Time
d) None of the mentioned
Answer: b
Explanation: None.

13. By using FAT, random access time is __________
a) the same
b) increased
c) decreased
d) not affected
Answer: c
Explanation: None.

1. A better way of contiguous allocation to extend the file size is _____________
a) adding an extent (another chunk of contiguous space)
b) adding an index table to the first contiguous block
c) adding pointers into the first contiguous block
d) none of the mentioned
Answer: a
Explanation: None.

2. If the extents are too large, then what is the problem that comes in?
a) internal fragmentation
b) external fragmentation
c) starvation
d) all of the mentioned
Answer: a
Explanation: None.

3. The FAT is used much as a _________
a) stack
b) linked list
c) data
d) pointer
Answer: b
Explanation: None.



4. A section of disk at the beginning of each partition is set aside to contain the table in _____________
a) fat
b) linked allocation
c) hashed allocation
d) indexed allocation
Answer: a
Explanation: None.

5. Contiguous allocation has two problems _________ and _________ that linked allocation solves.
a) external – fragmentation & size – declaration
b) internal – fragmentation & external – fragmentation
c) size – declaration & internal – fragmentation
d) memory – allocation & size – declaration
Answer: a
Explanation: None.



6. Each _______ has its own index block.
a) partition
b) address
c) file
d) all of the mentioned
Answer: c
Explanation: None.

7. Indexed allocation _________ direct access.
a) supports
b) does not support
c) is not related to
d) none of the mentioned
Answer: a
Explanation: None.

8. The pointer overhead of indexed allocation is generally _________ the pointer overhead of linked allocation.
a) less than
b) equal to
c) greater than
d) keeps varying with
Answer: c
Explanation: None.

9. For any type of access, contiguous allocation requires ______ access to get a disk block.
a) only one
b) at least two
c) exactly two
d) none of the mentioned
Answer: a
Explanation: We can easily keep the initial address of the file in memory and calculate immediately the disk address of the ith block and read it directly.