cmd_kernel/built-in.a := echo >/dev/null; rm -f kernel/built-in.a; ar cDPrST kernel/built-in.a kernel/fork.o kernel/exec_domain.o kernel/panic.o kernel/cpu.o kernel/exit.o kernel/softirq.o kernel/resource.o kernel/sysctl.o kernel/capability.o kernel/ptrace.o kernel/user.o kernel/signal.o kernel/sys.o kernel/umh.o kernel/workqueue.o kernel/pid.o kernel/task_work.o kernel/extable.o kernel/params.o kernel/kthread.o kernel/sys_ni.o kernel/nsproxy.o kernel/notifier.o kernel/ksysfs.o kernel/cred.o kernel/reboot.o kernel/async.o kernel/range.o kernel/smpboot.o kernel/ucount.o kernel/regset.o kernel/groups.o kernel/sched/built-in.a kernel/locking/built-in.a kernel/power/built-in.a kernel/printk/built-in.a kernel/irq/built-in.a kernel/rcu/built-in.a kernel/livepatch/built-in.a kernel/dma/built-in.a kernel/entry/built-in.a kernel/time/built-in.a kernel/futex.o kernel/dma.o kernel/up.o kernel/kallsyms.o kernel/utsname_sysctl.o kernel/irq_work.o kernel/static_call.o kernel/events/built-in.a kernel/iomem.o kernel/rseq.o
