__SYSCALL(0, sys_read)
__SYSCALL(1, sys_write)
__SYSCALL(2, sys_open)
__SYSCALL(3, sys_close)
__SYSCALL(4, sys_newstat)
__SYSCALL(5, sys_newfstat)
__SYSCALL(6, sys_newlstat)
__SYSCALL(7, sys_poll)
__SYSCALL(8, sys_lseek)
__SYSCALL(9, sys_mmap)
__SYSCALL(10, sys_mprotect)
__SYSCALL(11, sys_munmap)
__SYSCALL(12, sys_brk)
__SYSCALL(13, sys_rt_sigaction)
__SYSCALL(14, sys_rt_sigprocmask)
__SYSCALL(15, sys_rt_sigreturn)
__SYSCALL(16, sys_ioctl)
__SYSCALL(17, sys_pread64)
__SYSCALL(18, sys_pwrite64)
__SYSCALL(19, sys_readv)
__SYSCALL(20, sys_writev)
__SYSCALL(21, sys_access)
__SYSCALL(22, sys_pipe)
__SYSCALL(23, sys_select)
__SYSCALL(24, sys_sched_yield)
__SYSCALL(25, sys_mremap)
__SYSCALL(26, sys_msync)
__SYSCALL(27, sys_mincore)
__SYSCALL(28, sys_madvise)
__SYSCALL(29, sys_shmget)
__SYSCALL(30, sys_shmat)
__SYSCALL(31, sys_shmctl)
__SYSCALL(32, sys_dup)
__SYSCALL(33, sys_dup2)
__SYSCALL(34, sys_pause)
__SYSCALL(35, sys_nanosleep)
__SYSCALL(36, sys_getitimer)
__SYSCALL(37, sys_alarm)
__SYSCALL(38, sys_setitimer)
__SYSCALL(39, sys_getpid)
__SYSCALL(40, sys_sendfile64)
__SYSCALL(41, sys_socket)
__SYSCALL(42, sys_connect)
__SYSCALL(43, sys_accept)
__SYSCALL(44, sys_sendto)
__SYSCALL(45, sys_recvfrom)
__SYSCALL(46, sys_sendmsg)
__SYSCALL(47, sys_recvmsg)
__SYSCALL(48, sys_shutdown)
__SYSCALL(49, sys_bind)
__SYSCALL(50, sys_listen)
__SYSCALL(51, sys_getsockname)
__SYSCALL(52, sys_getpeername)
__SYSCALL(53, sys_socketpair)
__SYSCALL(54, sys_setsockopt)
__SYSCALL(55, sys_getsockopt)
__SYSCALL(56, sys_clone)
__SYSCALL(57, sys_fork)
__SYSCALL(58, sys_vfork)
__SYSCALL(59, sys_execve)
__SYSCALL(60, sys_exit)
__SYSCALL(61, sys_wait4)
__SYSCALL(62, sys_kill)
__SYSCALL(63, sys_newuname)
__SYSCALL(64, sys_semget)
__SYSCALL(65, sys_semop)
__SYSCALL(66, sys_semctl)
__SYSCALL(67, sys_shmdt)
__SYSCALL(68, sys_msgget)
__SYSCALL(69, sys_msgsnd)
__SYSCALL(70, sys_msgrcv)
__SYSCALL(71, sys_msgctl)
__SYSCALL(72, sys_fcntl)
__SYSCALL(73, sys_flock)
__SYSCALL(74, sys_fsync)
__SYSCALL(75, sys_fdatasync)
__SYSCALL(76, sys_truncate)
__SYSCALL(77, sys_ftruncate)
__SYSCALL(78, sys_getdents)
__SYSCALL(79, sys_getcwd)
__SYSCALL(80, sys_chdir)
__SYSCALL(81, sys_fchdir)
__SYSCALL(82, sys_rename)
__SYSCALL(83, sys_mkdir)
__SYSCALL(84, sys_rmdir)
__SYSCALL(85, sys_creat)
__SYSCALL(86, sys_link)
__SYSCALL(87, sys_unlink)
__SYSCALL(88, sys_symlink)
__SYSCALL(89, sys_readlink)
__SYSCALL(90, sys_chmod)
__SYSCALL(91, sys_fchmod)
__SYSCALL(92, sys_chown)
__SYSCALL(93, sys_fchown)
__SYSCALL(94, sys_lchown)
__SYSCALL(95, sys_umask)
__SYSCALL(96, sys_gettimeofday)
__SYSCALL(97, sys_getrlimit)
__SYSCALL(98, sys_getrusage)
__SYSCALL(99, sys_sysinfo)
__SYSCALL(100, sys_times)
__SYSCALL(101, sys_ptrace)
__SYSCALL(102, sys_getuid)
__SYSCALL(103, sys_syslog)
__SYSCALL(104, sys_getgid)
__SYSCALL(105, sys_setuid)
__SYSCALL(106, sys_setgid)
__SYSCALL(107, sys_geteuid)
__SYSCALL(108, sys_getegid)
__SYSCALL(109, sys_setpgid)
__SYSCALL(110, sys_getppid)
__SYSCALL(111, sys_getpgrp)
__SYSCALL(112, sys_setsid)
__SYSCALL(113, sys_setreuid)
__SYSCALL(114, sys_setregid)
__SYSCALL(115, sys_getgroups)
__SYSCALL(116, sys_setgroups)
__SYSCALL(117, sys_setresuid)
__SYSCALL(118, sys_getresuid)
__SYSCALL(119, sys_setresgid)
__SYSCALL(120, sys_getresgid)
__SYSCALL(121, sys_getpgid)
__SYSCALL(122, sys_setfsuid)
__SYSCALL(123, sys_setfsgid)
__SYSCALL(124, sys_getsid)
__SYSCALL(125, sys_capget)
__SYSCALL(126, sys_capset)
__SYSCALL(127, sys_rt_sigpending)
__SYSCALL(128, sys_rt_sigtimedwait)
__SYSCALL(129, sys_rt_sigqueueinfo)
__SYSCALL(130, sys_rt_sigsuspend)
__SYSCALL(131, sys_sigaltstack)
__SYSCALL(132, sys_utime)
__SYSCALL(133, sys_mknod)
__SYSCALL(134, sys_ni_syscall)
__SYSCALL(135, sys_personality)
__SYSCALL(136, sys_ustat)
__SYSCALL(137, sys_statfs)
__SYSCALL(138, sys_fstatfs)
__SYSCALL(139, sys_sysfs)
__SYSCALL(140, sys_getpriority)
__SYSCALL(141, sys_setpriority)
__SYSCALL(142, sys_sched_setparam)
__SYSCALL(143, sys_sched_getparam)
__SYSCALL(144, sys_sched_setscheduler)
__SYSCALL(145, sys_sched_getscheduler)
__SYSCALL(146, sys_sched_get_priority_max)
__SYSCALL(147, sys_sched_get_priority_min)
__SYSCALL(148, sys_sched_rr_get_interval)
__SYSCALL(149, sys_mlock)
__SYSCALL(150, sys_munlock)
__SYSCALL(151, sys_mlockall)
__SYSCALL(152, sys_munlockall)
__SYSCALL(153, sys_vhangup)
__SYSCALL(154, sys_modify_ldt)
__SYSCALL(155, sys_pivot_root)
__SYSCALL(156, sys_ni_syscall)
__SYSCALL(157, sys_prctl)
__SYSCALL(158, sys_arch_prctl)
__SYSCALL(159, sys_adjtimex)
__SYSCALL(160, sys_setrlimit)
__SYSCALL(161, sys_chroot)
__SYSCALL(162, sys_sync)
__SYSCALL(163, sys_acct)
__SYSCALL(164, sys_settimeofday)
__SYSCALL(165, sys_mount)
__SYSCALL(166, sys_umount)
__SYSCALL(167, sys_swapon)
__SYSCALL(168, sys_swapoff)
__SYSCALL(169, sys_reboot)
__SYSCALL(170, sys_sethostname)
__SYSCALL(171, sys_setdomainname)
__SYSCALL(172, sys_iopl)
__SYSCALL(173, sys_ioperm)
__SYSCALL(174, sys_ni_syscall)
__SYSCALL(175, sys_init_module)
__SYSCALL(176, sys_delete_module)
__SYSCALL(177, sys_ni_syscall)
__SYSCALL(178, sys_ni_syscall)
__SYSCALL(179, sys_quotactl)
__SYSCALL(180, sys_ni_syscall)
__SYSCALL(181, sys_ni_syscall)
__SYSCALL(182, sys_ni_syscall)
__SYSCALL(183, sys_ni_syscall)
__SYSCALL(184, sys_ni_syscall)
__SYSCALL(185, sys_ni_syscall)
__SYSCALL(186, sys_gettid)
__SYSCALL(187, sys_readahead)
__SYSCALL(188, sys_setxattr)
__SYSCALL(189, sys_lsetxattr)
__SYSCALL(190, sys_fsetxattr)
__SYSCALL(191, sys_getxattr)
__SYSCALL(192, sys_lgetxattr)
__SYSCALL(193, sys_fgetxattr)
__SYSCALL(194, sys_listxattr)
__SYSCALL(195, sys_llistxattr)
__SYSCALL(196, sys_flistxattr)
__SYSCALL(197, sys_removexattr)
__SYSCALL(198, sys_lremovexattr)
__SYSCALL(199, sys_fremovexattr)
__SYSCALL(200, sys_tkill)
__SYSCALL(201, sys_time)
__SYSCALL(202, sys_futex)
__SYSCALL(203, sys_sched_setaffinity)
__SYSCALL(204, sys_sched_getaffinity)
__SYSCALL(205, sys_ni_syscall)
__SYSCALL(206, sys_io_setup)
__SYSCALL(207, sys_io_destroy)
__SYSCALL(208, sys_io_getevents)
__SYSCALL(209, sys_io_submit)
__SYSCALL(210, sys_io_cancel)
__SYSCALL(211, sys_ni_syscall)
__SYSCALL(212, sys_lookup_dcookie)
__SYSCALL(213, sys_epoll_create)
__SYSCALL(214, sys_ni_syscall)
__SYSCALL(215, sys_ni_syscall)
__SYSCALL(216, sys_remap_file_pages)
__SYSCALL(217, sys_getdents64)
__SYSCALL(218, sys_set_tid_address)
__SYSCALL(219, sys_restart_syscall)
__SYSCALL(220, sys_semtimedop)
__SYSCALL(221, sys_fadvise64)
__SYSCALL(222, sys_timer_create)
__SYSCALL(223, sys_timer_settime)
__SYSCALL(224, sys_timer_gettime)
__SYSCALL(225, sys_timer_getoverrun)
__SYSCALL(226, sys_timer_delete)
__SYSCALL(227, sys_clock_settime)
__SYSCALL(228, sys_clock_gettime)
__SYSCALL(229, sys_clock_getres)
__SYSCALL(230, sys_clock_nanosleep)
__SYSCALL(231, sys_exit_group)
__SYSCALL(232, sys_epoll_wait)
__SYSCALL(233, sys_epoll_ctl)
__SYSCALL(234, sys_tgkill)
__SYSCALL(235, sys_utimes)
__SYSCALL(236, sys_ni_syscall)
__SYSCALL(237, sys_mbind)
__SYSCALL(238, sys_set_mempolicy)
__SYSCALL(239, sys_get_mempolicy)
__SYSCALL(240, sys_mq_open)
__SYSCALL(241, sys_mq_unlink)
__SYSCALL(242, sys_mq_timedsend)
__SYSCALL(243, sys_mq_timedreceive)
__SYSCALL(244, sys_mq_notify)
__SYSCALL(245, sys_mq_getsetattr)
__SYSCALL(246, sys_kexec_load)
__SYSCALL(247, sys_waitid)
__SYSCALL(248, sys_add_key)
__SYSCALL(249, sys_request_key)
__SYSCALL(250, sys_keyctl)
__SYSCALL(251, sys_ioprio_set)
__SYSCALL(252, sys_ioprio_get)
__SYSCALL(253, sys_inotify_init)
__SYSCALL(254, sys_inotify_add_watch)
__SYSCALL(255, sys_inotify_rm_watch)
__SYSCALL(256, sys_migrate_pages)
__SYSCALL(257, sys_openat)
__SYSCALL(258, sys_mkdirat)
__SYSCALL(259, sys_mknodat)
__SYSCALL(260, sys_fchownat)
__SYSCALL(261, sys_futimesat)
__SYSCALL(262, sys_newfstatat)
__SYSCALL(263, sys_unlinkat)
__SYSCALL(264, sys_renameat)
__SYSCALL(265, sys_linkat)
__SYSCALL(266, sys_symlinkat)
__SYSCALL(267, sys_readlinkat)
__SYSCALL(268, sys_fchmodat)
__SYSCALL(269, sys_faccessat)
__SYSCALL(270, sys_pselect6)
__SYSCALL(271, sys_ppoll)
__SYSCALL(272, sys_unshare)
__SYSCALL(273, sys_set_robust_list)
__SYSCALL(274, sys_get_robust_list)
__SYSCALL(275, sys_splice)
__SYSCALL(276, sys_tee)
__SYSCALL(277, sys_sync_file_range)
__SYSCALL(278, sys_vmsplice)
__SYSCALL(279, sys_move_pages)
__SYSCALL(280, sys_utimensat)
__SYSCALL(281, sys_epoll_pwait)
__SYSCALL(282, sys_signalfd)
__SYSCALL(283, sys_timerfd_create)
__SYSCALL(284, sys_eventfd)
__SYSCALL(285, sys_fallocate)
__SYSCALL(286, sys_timerfd_settime)
__SYSCALL(287, sys_timerfd_gettime)
__SYSCALL(288, sys_accept4)
__SYSCALL(289, sys_signalfd4)
__SYSCALL(290, sys_eventfd2)
__SYSCALL(291, sys_epoll_create1)
__SYSCALL(292, sys_dup3)
__SYSCALL(293, sys_pipe2)
__SYSCALL(294, sys_inotify_init1)
__SYSCALL(295, sys_preadv)
__SYSCALL(296, sys_pwritev)
__SYSCALL(297, sys_rt_tgsigqueueinfo)
__SYSCALL(298, sys_perf_event_open)
__SYSCALL(299, sys_recvmmsg)
__SYSCALL(300, sys_fanotify_init)
__SYSCALL(301, sys_fanotify_mark)
__SYSCALL(302, sys_prlimit64)
__SYSCALL(303, sys_name_to_handle_at)
__SYSCALL(304, sys_open_by_handle_at)
__SYSCALL(305, sys_clock_adjtime)
__SYSCALL(306, sys_syncfs)
__SYSCALL(307, sys_sendmmsg)
__SYSCALL(308, sys_setns)
__SYSCALL(309, sys_getcpu)
__SYSCALL(310, sys_process_vm_readv)
__SYSCALL(311, sys_process_vm_writev)
__SYSCALL(312, sys_kcmp)
__SYSCALL(313, sys_finit_module)
__SYSCALL(314, sys_sched_setattr)
__SYSCALL(315, sys_sched_getattr)
__SYSCALL(316, sys_renameat2)
__SYSCALL(317, sys_seccomp)
__SYSCALL(318, sys_getrandom)
__SYSCALL(319, sys_memfd_create)
__SYSCALL(320, sys_kexec_file_load)
__SYSCALL(321, sys_bpf)
__SYSCALL(322, sys_execveat)
__SYSCALL(323, sys_userfaultfd)
__SYSCALL(324, sys_membarrier)
__SYSCALL(325, sys_mlock2)
__SYSCALL(326, sys_copy_file_range)
__SYSCALL(327, sys_preadv2)
__SYSCALL(328, sys_pwritev2)
__SYSCALL(329, sys_pkey_mprotect)
__SYSCALL(330, sys_pkey_alloc)
__SYSCALL(331, sys_pkey_free)
__SYSCALL(332, sys_statx)
__SYSCALL(333, sys_io_pgetevents)
__SYSCALL(334, sys_rseq)
__SYSCALL(335, sys_ni_syscall)
__SYSCALL(336, sys_ni_syscall)
__SYSCALL(337, sys_ni_syscall)
__SYSCALL(338, sys_ni_syscall)
__SYSCALL(339, sys_ni_syscall)
__SYSCALL(340, sys_ni_syscall)
__SYSCALL(341, sys_ni_syscall)
__SYSCALL(342, sys_ni_syscall)
__SYSCALL(343, sys_ni_syscall)
__SYSCALL(344, sys_ni_syscall)
__SYSCALL(345, sys_ni_syscall)
__SYSCALL(346, sys_ni_syscall)
__SYSCALL(347, sys_ni_syscall)
__SYSCALL(348, sys_ni_syscall)
__SYSCALL(349, sys_ni_syscall)
__SYSCALL(350, sys_ni_syscall)
__SYSCALL(351, sys_ni_syscall)
__SYSCALL(352, sys_ni_syscall)
__SYSCALL(353, sys_ni_syscall)
__SYSCALL(354, sys_ni_syscall)
__SYSCALL(355, sys_ni_syscall)
__SYSCALL(356, sys_ni_syscall)
__SYSCALL(357, sys_ni_syscall)
__SYSCALL(358, sys_ni_syscall)
__SYSCALL(359, sys_ni_syscall)
__SYSCALL(360, sys_ni_syscall)
__SYSCALL(361, sys_ni_syscall)
__SYSCALL(362, sys_ni_syscall)
__SYSCALL(363, sys_ni_syscall)
__SYSCALL(364, sys_ni_syscall)
__SYSCALL(365, sys_ni_syscall)
__SYSCALL(366, sys_ni_syscall)
__SYSCALL(367, sys_ni_syscall)
__SYSCALL(368, sys_ni_syscall)
__SYSCALL(369, sys_ni_syscall)
__SYSCALL(370, sys_ni_syscall)
__SYSCALL(371, sys_ni_syscall)
__SYSCALL(372, sys_ni_syscall)
__SYSCALL(373, sys_ni_syscall)
__SYSCALL(374, sys_ni_syscall)
__SYSCALL(375, sys_ni_syscall)
__SYSCALL(376, sys_ni_syscall)
__SYSCALL(377, sys_ni_syscall)
__SYSCALL(378, sys_ni_syscall)
__SYSCALL(379, sys_ni_syscall)
__SYSCALL(380, sys_ni_syscall)
__SYSCALL(381, sys_ni_syscall)
__SYSCALL(382, sys_ni_syscall)
__SYSCALL(383, sys_ni_syscall)
__SYSCALL(384, sys_ni_syscall)
__SYSCALL(385, sys_ni_syscall)
__SYSCALL(386, sys_ni_syscall)
__SYSCALL(387, sys_ni_syscall)
__SYSCALL(388, sys_ni_syscall)
__SYSCALL(389, sys_ni_syscall)
__SYSCALL(390, sys_ni_syscall)
__SYSCALL(391, sys_ni_syscall)
__SYSCALL(392, sys_ni_syscall)
__SYSCALL(393, sys_ni_syscall)
__SYSCALL(394, sys_ni_syscall)
__SYSCALL(395, sys_ni_syscall)
__SYSCALL(396, sys_ni_syscall)
__SYSCALL(397, sys_ni_syscall)
__SYSCALL(398, sys_ni_syscall)
__SYSCALL(399, sys_ni_syscall)
__SYSCALL(400, sys_ni_syscall)
__SYSCALL(401, sys_ni_syscall)
__SYSCALL(402, sys_ni_syscall)
__SYSCALL(403, sys_ni_syscall)
__SYSCALL(404, sys_ni_syscall)
__SYSCALL(405, sys_ni_syscall)
__SYSCALL(406, sys_ni_syscall)
__SYSCALL(407, sys_ni_syscall)
__SYSCALL(408, sys_ni_syscall)
__SYSCALL(409, sys_ni_syscall)
__SYSCALL(410, sys_ni_syscall)
__SYSCALL(411, sys_ni_syscall)
__SYSCALL(412, sys_ni_syscall)
__SYSCALL(413, sys_ni_syscall)
__SYSCALL(414, sys_ni_syscall)
__SYSCALL(415, sys_ni_syscall)
__SYSCALL(416, sys_ni_syscall)
__SYSCALL(417, sys_ni_syscall)
__SYSCALL(418, sys_ni_syscall)
__SYSCALL(419, sys_ni_syscall)
__SYSCALL(420, sys_ni_syscall)
__SYSCALL(421, sys_ni_syscall)
__SYSCALL(422, sys_ni_syscall)
__SYSCALL(423, sys_ni_syscall)
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
__SYSCALL(441, sys_epoll_pwait2)
__SYSCALL(442, sys_mount_setattr)
__SYSCALL(443, sys_quotactl_fd)
__SYSCALL(444, sys_landlock_create_ruleset)
__SYSCALL(445, sys_landlock_add_rule)
__SYSCALL(446, sys_landlock_restrict_self)
__SYSCALL(447, sys_memfd_secret)
