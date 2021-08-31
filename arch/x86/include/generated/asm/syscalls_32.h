__SYSCALL(0, sys_restart_syscall)
__SYSCALL(1, sys_exit)
__SYSCALL(2, sys_fork)
__SYSCALL(3, sys_read)
__SYSCALL(4, sys_write)
__SYSCALL_WITH_COMPAT(5, sys_open, compat_sys_open)
__SYSCALL(6, sys_close)
__SYSCALL(7, sys_waitpid)
__SYSCALL(8, sys_creat)
__SYSCALL(9, sys_link)
__SYSCALL(10, sys_unlink)
__SYSCALL_WITH_COMPAT(11, sys_execve, compat_sys_execve)
__SYSCALL(12, sys_chdir)
__SYSCALL(13, sys_time32)
__SYSCALL(14, sys_mknod)
__SYSCALL(15, sys_chmod)
__SYSCALL(16, sys_lchown16)
__SYSCALL(17, sys_ni_syscall)
__SYSCALL(18, sys_stat)
__SYSCALL_WITH_COMPAT(19, sys_lseek, compat_sys_lseek)
__SYSCALL(20, sys_getpid)
__SYSCALL(21, sys_mount)
__SYSCALL(22, sys_oldumount)
__SYSCALL(23, sys_setuid16)
__SYSCALL(24, sys_getuid16)
__SYSCALL(25, sys_stime32)
__SYSCALL_WITH_COMPAT(26, sys_ptrace, compat_sys_ptrace)
__SYSCALL(27, sys_alarm)
__SYSCALL(28, sys_fstat)
__SYSCALL(29, sys_pause)
__SYSCALL(30, sys_utime32)
__SYSCALL(31, sys_ni_syscall)
__SYSCALL(32, sys_ni_syscall)
__SYSCALL(33, sys_access)
__SYSCALL(34, sys_nice)
__SYSCALL(35, sys_ni_syscall)
__SYSCALL(36, sys_sync)
__SYSCALL(37, sys_kill)
__SYSCALL(38, sys_rename)
__SYSCALL(39, sys_mkdir)
__SYSCALL(40, sys_rmdir)
__SYSCALL(41, sys_dup)
__SYSCALL(42, sys_pipe)
__SYSCALL_WITH_COMPAT(43, sys_times, compat_sys_times)
__SYSCALL(44, sys_ni_syscall)
__SYSCALL(45, sys_brk)
__SYSCALL(46, sys_setgid16)
__SYSCALL(47, sys_getgid16)
__SYSCALL(48, sys_signal)
__SYSCALL(49, sys_geteuid16)
__SYSCALL(50, sys_getegid16)
__SYSCALL(51, sys_acct)
__SYSCALL(52, sys_umount)
__SYSCALL(53, sys_ni_syscall)
__SYSCALL_WITH_COMPAT(54, sys_ioctl, compat_sys_ioctl)
__SYSCALL_WITH_COMPAT(55, sys_fcntl, compat_sys_fcntl64)
__SYSCALL(56, sys_ni_syscall)
__SYSCALL(57, sys_setpgid)
__SYSCALL(58, sys_ni_syscall)
__SYSCALL(59, sys_olduname)
__SYSCALL(60, sys_umask)
__SYSCALL(61, sys_chroot)
__SYSCALL_WITH_COMPAT(62, sys_ustat, compat_sys_ustat)
__SYSCALL(63, sys_dup2)
__SYSCALL(64, sys_getppid)
__SYSCALL(65, sys_getpgrp)
__SYSCALL(66, sys_setsid)
__SYSCALL_WITH_COMPAT(67, sys_sigaction, compat_sys_sigaction)
__SYSCALL(68, sys_sgetmask)
__SYSCALL(69, sys_ssetmask)
__SYSCALL(70, sys_setreuid16)
__SYSCALL(71, sys_setregid16)
__SYSCALL(72, sys_sigsuspend)
__SYSCALL_WITH_COMPAT(73, sys_sigpending, compat_sys_sigpending)
__SYSCALL(74, sys_sethostname)
__SYSCALL_WITH_COMPAT(75, sys_setrlimit, compat_sys_setrlimit)
__SYSCALL_WITH_COMPAT(76, sys_old_getrlimit, compat_sys_old_getrlimit)
__SYSCALL_WITH_COMPAT(77, sys_getrusage, compat_sys_getrusage)
__SYSCALL_WITH_COMPAT(78, sys_gettimeofday, compat_sys_gettimeofday)
__SYSCALL_WITH_COMPAT(79, sys_settimeofday, compat_sys_settimeofday)
__SYSCALL(80, sys_getgroups16)
__SYSCALL(81, sys_setgroups16)
__SYSCALL_WITH_COMPAT(82, sys_old_select, compat_sys_old_select)
__SYSCALL(83, sys_symlink)
__SYSCALL(84, sys_lstat)
__SYSCALL(85, sys_readlink)
__SYSCALL(86, sys_uselib)
__SYSCALL(87, sys_swapon)
__SYSCALL(88, sys_reboot)
__SYSCALL_WITH_COMPAT(89, sys_old_readdir, compat_sys_old_readdir)
__SYSCALL_WITH_COMPAT(90, sys_old_mmap, compat_sys_ia32_mmap)
__SYSCALL(91, sys_munmap)
__SYSCALL_WITH_COMPAT(92, sys_truncate, compat_sys_truncate)
__SYSCALL_WITH_COMPAT(93, sys_ftruncate, compat_sys_ftruncate)
__SYSCALL(94, sys_fchmod)
__SYSCALL(95, sys_fchown16)
__SYSCALL(96, sys_getpriority)
__SYSCALL(97, sys_setpriority)
__SYSCALL(98, sys_ni_syscall)
__SYSCALL_WITH_COMPAT(99, sys_statfs, compat_sys_statfs)
__SYSCALL_WITH_COMPAT(100, sys_fstatfs, compat_sys_fstatfs)
__SYSCALL(101, sys_ioperm)
__SYSCALL_WITH_COMPAT(102, sys_socketcall, compat_sys_socketcall)
__SYSCALL(103, sys_syslog)
__SYSCALL_WITH_COMPAT(104, sys_setitimer, compat_sys_setitimer)
__SYSCALL_WITH_COMPAT(105, sys_getitimer, compat_sys_getitimer)
__SYSCALL_WITH_COMPAT(106, sys_newstat, compat_sys_newstat)
__SYSCALL_WITH_COMPAT(107, sys_newlstat, compat_sys_newlstat)
__SYSCALL_WITH_COMPAT(108, sys_newfstat, compat_sys_newfstat)
__SYSCALL(109, sys_uname)
__SYSCALL(110, sys_iopl)
__SYSCALL(111, sys_vhangup)
__SYSCALL(112, sys_ni_syscall)
__SYSCALL_WITH_COMPAT(113, sys_vm86old, sys_ni_syscall)
__SYSCALL_WITH_COMPAT(114, sys_wait4, compat_sys_wait4)
__SYSCALL(115, sys_swapoff)
__SYSCALL_WITH_COMPAT(116, sys_sysinfo, compat_sys_sysinfo)
__SYSCALL_WITH_COMPAT(117, sys_ipc, compat_sys_ipc)
__SYSCALL(118, sys_fsync)
__SYSCALL_WITH_COMPAT(119, sys_sigreturn, compat_sys_sigreturn)
__SYSCALL_WITH_COMPAT(120, sys_clone, compat_sys_ia32_clone)
__SYSCALL(121, sys_setdomainname)
__SYSCALL(122, sys_newuname)
__SYSCALL(123, sys_modify_ldt)
__SYSCALL(124, sys_adjtimex_time32)
__SYSCALL(125, sys_mprotect)
__SYSCALL_WITH_COMPAT(126, sys_sigprocmask, compat_sys_sigprocmask)
__SYSCALL(127, sys_ni_syscall)
__SYSCALL(128, sys_init_module)
__SYSCALL(129, sys_delete_module)
__SYSCALL(130, sys_ni_syscall)
__SYSCALL(131, sys_quotactl)
__SYSCALL(132, sys_getpgid)
__SYSCALL(133, sys_fchdir)
__SYSCALL(134, sys_bdflush)
__SYSCALL(135, sys_sysfs)
__SYSCALL(136, sys_personality)
__SYSCALL(137, sys_ni_syscall)
__SYSCALL(138, sys_setfsuid16)
__SYSCALL(139, sys_setfsgid16)
__SYSCALL(140, sys_llseek)
__SYSCALL_WITH_COMPAT(141, sys_getdents, compat_sys_getdents)
__SYSCALL_WITH_COMPAT(142, sys_select, compat_sys_select)
__SYSCALL(143, sys_flock)
__SYSCALL(144, sys_msync)
__SYSCALL(145, sys_readv)
__SYSCALL(146, sys_writev)
__SYSCALL(147, sys_getsid)
__SYSCALL(148, sys_fdatasync)
__SYSCALL(149, sys_ni_syscall)
__SYSCALL(150, sys_mlock)
__SYSCALL(151, sys_munlock)
__SYSCALL(152, sys_mlockall)
__SYSCALL(153, sys_munlockall)
__SYSCALL(154, sys_sched_setparam)
__SYSCALL(155, sys_sched_getparam)
__SYSCALL(156, sys_sched_setscheduler)
__SYSCALL(157, sys_sched_getscheduler)
__SYSCALL(158, sys_sched_yield)
__SYSCALL(159, sys_sched_get_priority_max)
__SYSCALL(160, sys_sched_get_priority_min)
__SYSCALL(161, sys_sched_rr_get_interval_time32)
__SYSCALL(162, sys_nanosleep_time32)
__SYSCALL(163, sys_mremap)
__SYSCALL(164, sys_setresuid16)
__SYSCALL(165, sys_getresuid16)
__SYSCALL_WITH_COMPAT(166, sys_vm86, sys_ni_syscall)
__SYSCALL(167, sys_ni_syscall)
__SYSCALL(168, sys_poll)
__SYSCALL(169, sys_ni_syscall)
__SYSCALL(170, sys_setresgid16)
__SYSCALL(171, sys_getresgid16)
__SYSCALL(172, sys_prctl)
__SYSCALL_WITH_COMPAT(173, sys_rt_sigreturn, compat_sys_rt_sigreturn)
__SYSCALL_WITH_COMPAT(174, sys_rt_sigaction, compat_sys_rt_sigaction)
__SYSCALL_WITH_COMPAT(175, sys_rt_sigprocmask, compat_sys_rt_sigprocmask)
__SYSCALL_WITH_COMPAT(176, sys_rt_sigpending, compat_sys_rt_sigpending)
__SYSCALL_WITH_COMPAT(177, sys_rt_sigtimedwait_time32, compat_sys_rt_sigtimedwait_time32)
__SYSCALL_WITH_COMPAT(178, sys_rt_sigqueueinfo, compat_sys_rt_sigqueueinfo)
__SYSCALL_WITH_COMPAT(179, sys_rt_sigsuspend, compat_sys_rt_sigsuspend)
__SYSCALL(180, sys_ia32_pread64)
__SYSCALL(181, sys_ia32_pwrite64)
__SYSCALL(182, sys_chown16)
__SYSCALL(183, sys_getcwd)
__SYSCALL(184, sys_capget)
__SYSCALL(185, sys_capset)
__SYSCALL_WITH_COMPAT(186, sys_sigaltstack, compat_sys_sigaltstack)
__SYSCALL_WITH_COMPAT(187, sys_sendfile, compat_sys_sendfile)
__SYSCALL(188, sys_ni_syscall)
__SYSCALL(189, sys_ni_syscall)
__SYSCALL(190, sys_vfork)
__SYSCALL_WITH_COMPAT(191, sys_getrlimit, compat_sys_getrlimit)
__SYSCALL(192, sys_mmap_pgoff)
__SYSCALL(193, sys_ia32_truncate64)
__SYSCALL(194, sys_ia32_ftruncate64)
__SYSCALL_WITH_COMPAT(195, sys_stat64, compat_sys_ia32_stat64)
__SYSCALL_WITH_COMPAT(196, sys_lstat64, compat_sys_ia32_lstat64)
__SYSCALL_WITH_COMPAT(197, sys_fstat64, compat_sys_ia32_fstat64)
__SYSCALL(198, sys_lchown)
__SYSCALL(199, sys_getuid)
__SYSCALL(200, sys_getgid)
__SYSCALL(201, sys_geteuid)
__SYSCALL(202, sys_getegid)
__SYSCALL(203, sys_setreuid)
__SYSCALL(204, sys_setregid)
__SYSCALL(205, sys_getgroups)
__SYSCALL(206, sys_setgroups)
__SYSCALL(207, sys_fchown)
__SYSCALL(208, sys_setresuid)
__SYSCALL(209, sys_getresuid)
__SYSCALL(210, sys_setresgid)
__SYSCALL(211, sys_getresgid)
__SYSCALL(212, sys_chown)
__SYSCALL(213, sys_setuid)
__SYSCALL(214, sys_setgid)
__SYSCALL(215, sys_setfsuid)
__SYSCALL(216, sys_setfsgid)
__SYSCALL(217, sys_pivot_root)
__SYSCALL(218, sys_mincore)
__SYSCALL(219, sys_madvise)
__SYSCALL(220, sys_getdents64)
__SYSCALL_WITH_COMPAT(221, sys_fcntl64, compat_sys_fcntl64)
__SYSCALL(222, sys_ni_syscall)
__SYSCALL(223, sys_ni_syscall)
__SYSCALL(224, sys_gettid)
__SYSCALL(225, sys_ia32_readahead)
__SYSCALL(226, sys_setxattr)
__SYSCALL(227, sys_lsetxattr)
__SYSCALL(228, sys_fsetxattr)
__SYSCALL(229, sys_getxattr)
__SYSCALL(230, sys_lgetxattr)
__SYSCALL(231, sys_fgetxattr)
__SYSCALL(232, sys_listxattr)
__SYSCALL(233, sys_llistxattr)
__SYSCALL(234, sys_flistxattr)
__SYSCALL(235, sys_removexattr)
__SYSCALL(236, sys_lremovexattr)
__SYSCALL(237, sys_fremovexattr)
__SYSCALL(238, sys_tkill)
__SYSCALL(239, sys_sendfile64)
__SYSCALL(240, sys_futex_time32)
__SYSCALL_WITH_COMPAT(241, sys_sched_setaffinity, compat_sys_sched_setaffinity)
__SYSCALL_WITH_COMPAT(242, sys_sched_getaffinity, compat_sys_sched_getaffinity)
__SYSCALL(243, sys_set_thread_area)
__SYSCALL(244, sys_get_thread_area)
__SYSCALL_WITH_COMPAT(245, sys_io_setup, compat_sys_io_setup)
__SYSCALL(246, sys_io_destroy)
__SYSCALL(247, sys_io_getevents_time32)
__SYSCALL_WITH_COMPAT(248, sys_io_submit, compat_sys_io_submit)
__SYSCALL(249, sys_io_cancel)
__SYSCALL(250, sys_ia32_fadvise64)
__SYSCALL(251, sys_ni_syscall)
__SYSCALL(252, sys_exit_group)
__SYSCALL_WITH_COMPAT(253, sys_lookup_dcookie, compat_sys_lookup_dcookie)
__SYSCALL(254, sys_epoll_create)
__SYSCALL(255, sys_epoll_ctl)
__SYSCALL(256, sys_epoll_wait)
__SYSCALL(257, sys_remap_file_pages)
__SYSCALL(258, sys_set_tid_address)
__SYSCALL_WITH_COMPAT(259, sys_timer_create, compat_sys_timer_create)
__SYSCALL(260, sys_timer_settime32)
__SYSCALL(261, sys_timer_gettime32)
__SYSCALL(262, sys_timer_getoverrun)
__SYSCALL(263, sys_timer_delete)
__SYSCALL(264, sys_clock_settime32)
__SYSCALL(265, sys_clock_gettime32)
__SYSCALL(266, sys_clock_getres_time32)
__SYSCALL(267, sys_clock_nanosleep_time32)
__SYSCALL_WITH_COMPAT(268, sys_statfs64, compat_sys_statfs64)
__SYSCALL_WITH_COMPAT(269, sys_fstatfs64, compat_sys_fstatfs64)
__SYSCALL(270, sys_tgkill)
__SYSCALL(271, sys_utimes_time32)
__SYSCALL(272, sys_ia32_fadvise64_64)
__SYSCALL(273, sys_ni_syscall)
__SYSCALL(274, sys_mbind)
__SYSCALL_WITH_COMPAT(275, sys_get_mempolicy, compat_sys_get_mempolicy)
__SYSCALL(276, sys_set_mempolicy)
__SYSCALL_WITH_COMPAT(277, sys_mq_open, compat_sys_mq_open)
__SYSCALL(278, sys_mq_unlink)
__SYSCALL(279, sys_mq_timedsend_time32)
__SYSCALL(280, sys_mq_timedreceive_time32)
__SYSCALL_WITH_COMPAT(281, sys_mq_notify, compat_sys_mq_notify)
__SYSCALL_WITH_COMPAT(282, sys_mq_getsetattr, compat_sys_mq_getsetattr)
__SYSCALL_WITH_COMPAT(283, sys_kexec_load, compat_sys_kexec_load)
__SYSCALL_WITH_COMPAT(284, sys_waitid, compat_sys_waitid)
__SYSCALL(285, sys_ni_syscall)
__SYSCALL(286, sys_add_key)
__SYSCALL(287, sys_request_key)
__SYSCALL_WITH_COMPAT(288, sys_keyctl, compat_sys_keyctl)
__SYSCALL(289, sys_ioprio_set)
__SYSCALL(290, sys_ioprio_get)
__SYSCALL(291, sys_inotify_init)
__SYSCALL(292, sys_inotify_add_watch)
__SYSCALL(293, sys_inotify_rm_watch)
__SYSCALL(294, sys_migrate_pages)
__SYSCALL_WITH_COMPAT(295, sys_openat, compat_sys_openat)
__SYSCALL(296, sys_mkdirat)
__SYSCALL(297, sys_mknodat)
__SYSCALL(298, sys_fchownat)
__SYSCALL(299, sys_futimesat_time32)
__SYSCALL_WITH_COMPAT(300, sys_fstatat64, compat_sys_ia32_fstatat64)
__SYSCALL(301, sys_unlinkat)
__SYSCALL(302, sys_renameat)
__SYSCALL(303, sys_linkat)
__SYSCALL(304, sys_symlinkat)
__SYSCALL(305, sys_readlinkat)
__SYSCALL(306, sys_fchmodat)
__SYSCALL(307, sys_faccessat)
__SYSCALL_WITH_COMPAT(308, sys_pselect6_time32, compat_sys_pselect6_time32)
__SYSCALL_WITH_COMPAT(309, sys_ppoll_time32, compat_sys_ppoll_time32)
__SYSCALL(310, sys_unshare)
__SYSCALL_WITH_COMPAT(311, sys_set_robust_list, compat_sys_set_robust_list)
__SYSCALL_WITH_COMPAT(312, sys_get_robust_list, compat_sys_get_robust_list)
__SYSCALL(313, sys_splice)
__SYSCALL(314, sys_ia32_sync_file_range)
__SYSCALL(315, sys_tee)
__SYSCALL(316, sys_vmsplice)
__SYSCALL_WITH_COMPAT(317, sys_move_pages, compat_sys_move_pages)
__SYSCALL(318, sys_getcpu)
__SYSCALL(319, sys_epoll_pwait)
__SYSCALL(320, sys_utimensat_time32)
__SYSCALL_WITH_COMPAT(321, sys_signalfd, compat_sys_signalfd)
__SYSCALL(322, sys_timerfd_create)
__SYSCALL(323, sys_eventfd)
__SYSCALL(324, sys_ia32_fallocate)
__SYSCALL(325, sys_timerfd_settime32)
__SYSCALL(326, sys_timerfd_gettime32)
__SYSCALL_WITH_COMPAT(327, sys_signalfd4, compat_sys_signalfd4)
__SYSCALL(328, sys_eventfd2)
__SYSCALL(329, sys_epoll_create1)
__SYSCALL(330, sys_dup3)
__SYSCALL(331, sys_pipe2)
__SYSCALL(332, sys_inotify_init1)
__SYSCALL_WITH_COMPAT(333, sys_preadv, compat_sys_preadv)
__SYSCALL_WITH_COMPAT(334, sys_pwritev, compat_sys_pwritev)
__SYSCALL_WITH_COMPAT(335, sys_rt_tgsigqueueinfo, compat_sys_rt_tgsigqueueinfo)
__SYSCALL(336, sys_perf_event_open)
__SYSCALL_WITH_COMPAT(337, sys_recvmmsg_time32, compat_sys_recvmmsg_time32)
__SYSCALL(338, sys_fanotify_init)
__SYSCALL_WITH_COMPAT(339, sys_fanotify_mark, compat_sys_fanotify_mark)
__SYSCALL(340, sys_prlimit64)
__SYSCALL(341, sys_name_to_handle_at)
__SYSCALL_WITH_COMPAT(342, sys_open_by_handle_at, compat_sys_open_by_handle_at)
__SYSCALL(343, sys_clock_adjtime32)
__SYSCALL(344, sys_syncfs)
__SYSCALL_WITH_COMPAT(345, sys_sendmmsg, compat_sys_sendmmsg)
__SYSCALL(346, sys_setns)
__SYSCALL(347, sys_process_vm_readv)
__SYSCALL(348, sys_process_vm_writev)
__SYSCALL(349, sys_kcmp)
__SYSCALL(350, sys_finit_module)
__SYSCALL(351, sys_sched_setattr)
__SYSCALL(352, sys_sched_getattr)
__SYSCALL(353, sys_renameat2)
__SYSCALL(354, sys_seccomp)
__SYSCALL(355, sys_getrandom)
__SYSCALL(356, sys_memfd_create)
__SYSCALL(357, sys_bpf)
__SYSCALL_WITH_COMPAT(358, sys_execveat, compat_sys_execveat)
__SYSCALL(359, sys_socket)
__SYSCALL(360, sys_socketpair)
__SYSCALL(361, sys_bind)
__SYSCALL(362, sys_connect)
__SYSCALL(363, sys_listen)
__SYSCALL(364, sys_accept4)
__SYSCALL_WITH_COMPAT(365, sys_getsockopt, sys_getsockopt)
__SYSCALL_WITH_COMPAT(366, sys_setsockopt, sys_setsockopt)
__SYSCALL(367, sys_getsockname)
__SYSCALL(368, sys_getpeername)
__SYSCALL(369, sys_sendto)
__SYSCALL_WITH_COMPAT(370, sys_sendmsg, compat_sys_sendmsg)
__SYSCALL_WITH_COMPAT(371, sys_recvfrom, compat_sys_recvfrom)
__SYSCALL_WITH_COMPAT(372, sys_recvmsg, compat_sys_recvmsg)
__SYSCALL(373, sys_shutdown)
__SYSCALL(374, sys_userfaultfd)
__SYSCALL(375, sys_membarrier)
__SYSCALL(376, sys_mlock2)
__SYSCALL(377, sys_copy_file_range)
__SYSCALL_WITH_COMPAT(378, sys_preadv2, compat_sys_preadv2)
__SYSCALL_WITH_COMPAT(379, sys_pwritev2, compat_sys_pwritev2)
__SYSCALL(380, sys_pkey_mprotect)
__SYSCALL(381, sys_pkey_alloc)
__SYSCALL(382, sys_pkey_free)
__SYSCALL(383, sys_statx)
__SYSCALL_WITH_COMPAT(384, sys_arch_prctl, compat_sys_arch_prctl)
__SYSCALL_WITH_COMPAT(385, sys_io_pgetevents_time32, compat_sys_io_pgetevents)
__SYSCALL(386, sys_rseq)
__SYSCALL(387, sys_ni_syscall)
__SYSCALL(388, sys_ni_syscall)
__SYSCALL(389, sys_ni_syscall)
__SYSCALL(390, sys_ni_syscall)
__SYSCALL(391, sys_ni_syscall)
__SYSCALL(392, sys_ni_syscall)
__SYSCALL(393, sys_semget)
__SYSCALL_WITH_COMPAT(394, sys_semctl, compat_sys_semctl)
__SYSCALL(395, sys_shmget)
__SYSCALL_WITH_COMPAT(396, sys_shmctl, compat_sys_shmctl)
__SYSCALL_WITH_COMPAT(397, sys_shmat, compat_sys_shmat)
__SYSCALL(398, sys_shmdt)
__SYSCALL(399, sys_msgget)
__SYSCALL_WITH_COMPAT(400, sys_msgsnd, compat_sys_msgsnd)
__SYSCALL_WITH_COMPAT(401, sys_msgrcv, compat_sys_msgrcv)
__SYSCALL_WITH_COMPAT(402, sys_msgctl, compat_sys_msgctl)
__SYSCALL(403, sys_clock_gettime)
__SYSCALL(404, sys_clock_settime)
__SYSCALL(405, sys_clock_adjtime)
__SYSCALL(406, sys_clock_getres)
__SYSCALL(407, sys_clock_nanosleep)
__SYSCALL(408, sys_timer_gettime)
__SYSCALL(409, sys_timer_settime)
__SYSCALL(410, sys_timerfd_gettime)
__SYSCALL(411, sys_timerfd_settime)
__SYSCALL(412, sys_utimensat)
__SYSCALL_WITH_COMPAT(413, sys_pselect6, compat_sys_pselect6_time64)
__SYSCALL_WITH_COMPAT(414, sys_ppoll, compat_sys_ppoll_time64)
__SYSCALL(415, sys_ni_syscall)
__SYSCALL(416, sys_io_pgetevents)
__SYSCALL_WITH_COMPAT(417, sys_recvmmsg, compat_sys_recvmmsg_time64)
__SYSCALL(418, sys_mq_timedsend)
__SYSCALL(419, sys_mq_timedreceive)
__SYSCALL(420, sys_semtimedop)
__SYSCALL_WITH_COMPAT(421, sys_rt_sigtimedwait, compat_sys_rt_sigtimedwait_time64)
__SYSCALL(422, sys_futex)
__SYSCALL(423, sys_sched_rr_get_interval)
__SYSCALL(424, sys_pidfd_send_signal)
__SYSCALL(425, sys_io_uring_setup)
__SYSCALL(426, sys_io_uring_enter)
__SYSCALL(427, sys_io_uring_register)
__SYSCALL(428, sys_open_tree)
__SYSCALL(429, sys_move_mount)
__SYSCALL(430, sys_fsopen)
__SYSCALL(431, sys_fsconfig)
__SYSCALL(432, sys_fsmount)
__SYSCALL(433, sys_fspick)
__SYSCALL(434, sys_pidfd_open)
__SYSCALL(435, sys_clone3)
__SYSCALL(436, sys_close_range)
__SYSCALL(437, sys_openat2)
__SYSCALL(438, sys_pidfd_getfd)
__SYSCALL(439, sys_faccessat2)
__SYSCALL(440, sys_process_madvise)
__SYSCALL_WITH_COMPAT(441, sys_epoll_pwait2, compat_sys_epoll_pwait2)
__SYSCALL(442, sys_mount_setattr)
__SYSCALL(443, sys_quotactl_fd)
__SYSCALL(444, sys_landlock_create_ruleset)
__SYSCALL(445, sys_landlock_add_rule)
__SYSCALL(446, sys_landlock_restrict_self)
__SYSCALL(447, sys_memfd_secret)
