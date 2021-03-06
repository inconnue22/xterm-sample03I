/* xtermcfg.h.  Generated automatically by configure.  */
/* $XTermId: xtermcfg.hin,v 1.221 2021/03/21 19:51:33 tom Exp $ */

/*
 * Copyright 1997-2020,2021 by Thomas E. Dickey
 *
 *                         All Rights Reserved
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE ABOVE LISTED COPYRIGHT HOLDER(S) BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name(s) of the above copyright
 * holders shall not be used in advertising or otherwise to promote the
 * sale, use or other dealings in this Software without prior written
 * authorization.
 */

#ifndef included_xtermcfg_h
#define included_xtermcfg_h 1

/* This is a template for <xtermcfg.h> */

/*
 * There are no configure options for these features:
 * ALLOWLOGFILECHANGES
 * ALLOWLOGFILEONOFF
 * CANT_OPEN_DEV_TTY
 * DEBUG* (any debug-option)
 * DUMP_* (mostly in the ReGIS/SIXEL code)
 * HAS_LTCHARS
 * HAVE_SYS_PTEM_H
 * PUCC_PTYD
 * USE_LOGIN_DASH_P
 * USE_X11TERM
 */

/* #undef ALLOWLOGFILEEXEC */		/* CF_ARG_ENABLE(enable-logfile-exec) */
#define ALLOWLOGGING 1		/* CF_ARG_ENABLE(enable-logging) */
/* #undef CC_HAS_PROTOS */		/* CF_ANSI_CC */
/* #undef CSRG_BASED */		/* CF_TYPE_FD_MASK */
/* #undef DECL_ERRNO */		/* CF_ERRNO */
#define DEFDELETE_DEL Maybe		/* AC_ARG_ENABLE(delete-is-del) */
#define DEF_ALT_SENDS_ESC False	/* CF_ARG_ENABLE(alt-sends-esc) */
#define DEF_BACKARO_BS True		/* CF_ARG_DISABLE(backarrow-key) */
#define DEF_BACKARO_ERASE False	/* CF_ARG_ENABLE(backarrow-is-erase) */
#define DEF_INITIAL_ERASE False	/* CF_ARG_DISABLE(initial-erase) */
#define DEF_META_SENDS_ESC False	/* CF_ARG_ENABLE(meta-sends-esc) */
/* #undef DFT_COLORMODE */		/* AC_ARG_WITH(default-color-mode) */
#define DFT_DECID "420"		/* AC_ARG_WITH(default-terminal-id) */
#define DFT_TERMTYPE "xterm"		/* AC_ARG_WITH(default-term-type) */
/* #undef DISABLE_SETGID */		/* CF_ARG_DISABLE(setgid) */
/* #undef DISABLE_SETUID */		/* CF_ARG_DISABLE(setuid) */
#define HAVE_ENDUSERSHELL 1	/* AC_CHECK_FUNCS(endusershell) */
#define HAVE_GETHOSTNAME 1		/* AC_CHECK_FUNCS(gethostname) */
#define HAVE_GETLOGIN 1		/* AC_CHECK_FUNCS(getlogin) */
#define HAVE_GETUSERSHELL 1	/* AC_CHECK_FUNCS(getusershell) */
#define HAVE_GRANTPT 1		/* CF_FUNC_GRANTPT */
/* #undef HAVE_GRANTPT_PTY_ISATTY */	/* CF_FUNC_GRANTPT */
#define HAVE_INITGROUPS 1		/* AC_CHECK_FUNCS(initgroups) */
#define HAVE_LANGINFO_CODESET 1	/* AM_LANGINFO_CODESET */
#define HAVE_LASTLOG_H 1		/* CF_LASTLOG */
#define HAVE_LIBXPM 1		/* CF_WITH_XPM */
/* #undef HAVE_LIB_NEXTAW */		/* CF_X_ATHENA(--with-neXtaw) */
/* #undef HAVE_LIB_PCRE */		/* CF_WITH_PCRE */
#define HAVE_LIB_PCRE2 1		/* CF_WITH_PCRE2 */
#define HAVE_LIB_XAW 1		/* CF_X_ATHENA */
/* #undef HAVE_LIB_XAW3D */		/* CF_X_ATHENA(--with-Xaw3d) */
/* #undef HAVE_LIB_XAW3DXFT */	/* CF_X_ATHENA(--with-Xaw3dxft) */
/* #undef HAVE_LIB_XAWPLUS */		/* CF_X_ATHENA(--with-XawPlus) */
#define HAVE_LIB_XCURSOR 1		/* AC_CHECK_LIB(Xcursor) */
#define HAVE_MKDTEMP 1		/* AC_CHECK_FUNCS(mkdtemp) */
#define HAVE_NCURSES_CURSES_H 1	/* AC_CHECK_HEADERS(ncurses/curses.h) */
#define HAVE_NCURSES_TERM_H 1	/* AC_CHECK_HEADERS(ncurses/term.h) */
#define HAVE_PATHS_H 1		/* CF_LASTLOG */
#define HAVE_PCRE2POSIX_H 1	/* CF_WITH_PCRE2 */
#define HAVE_PCREPOSIX_H 1		/* CF_WITH_PCRE */
#define HAVE_POSIX_OPENPT 1	/* CF_FUNC_GRANTPT */
#define HAVE_POSIX_SAVED_IDS 1	/* CF_POSIX_SAVED_IDS */
#define HAVE_PTSNAME 1		/* CF_FUNC_GRANTPT */
#define HAVE_PUTENV 1		/* AC_CHECK_FUNCS(putenv) */
#define HAVE_SCHED_YIELD 1		/* AC_CHECK_FUNCS(sched_yield) */
#define HAVE_SETPGID 1		/* AC_CHECK_FUNCS(setpgid) */
#define HAVE_STDINT_H 1		/* AC_PROG_CC_STDC */
#define HAVE_STDLIB_H 1		/* AC_CHECK_HEADERS(stdlib.h) */
/* #undef HAVE_STDNORETURN_H */	/* CF_C11_NORETURN */
#define HAVE_STRFTIME 1		/* AC_CHECK_FUNCS(strftime) */
/* #undef HAVE_SYS_TIME_H */		/* AC_HEADER_TIME */
#define HAVE_SYS_TTYDEFAULTS_H 1	/* AC_CHECK_HEADERS(sys/ttydefaults.h) */
#define HAVE_SYS_WAIT_H 1		/* AC_HEADER_SYS_WAIT */
#define HAVE_TCGETATTR 1		/* AC_CHECK_FUNCS(tcgetattr) */
#define HAVE_TERMCAP_H 1		/* AC_CHECK_HEADERS(termcap.h) */
#define HAVE_TERMIOS_H 1		/* AC_CHECK_HEADERS(termios.h) */
/* #undef HAVE_TERMIO_C_ISPEED */	/* CF_TERMIO_C_ISPEED */
#define HAVE_TERM_H 1		/* AC_CHECK_HEADERS(term.h) */
#define HAVE_TIGETSTR 1		/* AC_CHECK_FUNCS(tigetstr) */
#define HAVE_UNISTD_H 1		/* AC_CHECK_HEADERS(unistd.h) */
#define HAVE_UNSETENV 1		/* AC_CHECK_FUNCS(unsetenv) */
#define HAVE_USE_EXTENDED_NAMES 1	/* AC_CHECK_FUNCS(use_extended_names) */
#define HAVE_UTMP 1		/* CF_UTMP */
#define HAVE_UTMP_UT_HOST 1	/* CF_UTMP_UT_HOST */
#define HAVE_UTMP_UT_SESSION 1	/* CF_UTMP_UT_SESSION */
/* #undef HAVE_UTMP_UT_SYSLEN */	/* CF_UTMP_UT_SYSLEN */
#define HAVE_UTMP_UT_XSTATUS 1	/* CF_UTMP_UT_XSTATUS */
#define HAVE_UTMP_UT_XTIME 1	/* CF_UTMP_UT_XTIME */
#define HAVE_WAITPID 1		/* AC_CHECK_FUNCS(waitpid) */
#define HAVE_WCHAR_H 1		/* AC_CHECK_HEADERS(wchar.h) */
#define HAVE_WCSWIDTH 1		/* AC_CHECK_FUNCS(wcswidth) */
#define HAVE_WCWIDTH 1		/* AC_CHECK_FUNCS(wcwidth) */
#define HAVE_X11_DECKEYSYM_H 1	/* AC_CHECK_HEADERS(X11/DECkeysym.h) */
#define HAVE_X11_EXTENSIONS_XDBE_H 1 /* AC_CHECK_HEADERS(X11/extensions/Xdbe.h) */
/* #undef HAVE_X11_EXTENSIONS_XINERAMA_H */ /* AC_CHECK_HEADERS(X11/extensions/Xinerama.h) */
#define HAVE_X11_EXTENSIONS_XKB_H 1 /* AC_CHECK_HEADERS(X11/extensions/XKB.h) */
#define HAVE_X11_SUNKEYSYM_H 1	/* AC_CHECK_HEADERS(X11/Sunkeysym.h) */
#define HAVE_X11_TRANSLATEI_H 1	/* AC_CHECK_HEADERS(X11/TranslateI.h) */
#define HAVE_X11_XF86KEYSYM_H 1	/* AC_CHECK_HEADERS(X11/XF86keysym.h) */
#define HAVE_X11_XKBLIB_H 1	/* AC_CHECK_HEADERS(X11/XKBlib.h) */
#define HAVE_X11_XPOLL_H 1		/* AC_CHECK_HEADERS(X11/Xpoll.h) */
#define HAVE_XDBESWAPBUFFERS 1	/* AC_CHECK_FUNC(XdbeSwapBuffers) */
/* #undef HAVE_XFTDRAWSETCLIP */	/* CF_X_FREETYPE */
/* #undef HAVE_XFTDRAWSETCLIPRECTANGLES */ /* CF_X_FREETYPE */
#define HAVE_XKBKEYCODETOKEYSYM 1	/* AC_CHECK_FUNCS(XkbKeycodeToKeysym) */
#define HAVE_XKBQUERYEXTENSION 1	/* AC_CHECK_FUNCS(XkbQueryExtension) */
/* #undef HAVE_XKB_BELL_EXT */	/* CF_XKB_BELL_EXT */
/* #undef LUIT_PATH */		/* CF_ARG_ENABLE(luit) */
/* #undef NO_ACTIVE_ICON */		/* CF_ARG_DISABLE(active-icon) */
/* #undef NO_LEAKS */			/* CF_ARG_DISABLE(leaks) */
/* #undef OPT_256_COLORS */		/* CF_ARG_ENABLE(256-color) */
/* #undef OPT_88_COLORS */		/* CF_ARG_ENABLE(88-color) */
/* #undef OPT_AIX_COLORS */		/* CF_ARG_DISABLE(16-color) */
/* #undef OPT_BLINK_CURS */		/* CF_ARG_DISABLE(blink-cursor) */
/* #undef OPT_BLINK_TEXT */		/* CF_ARG_DISABLE(blink-text) */
/* #undef OPT_BOX_CHARS */		/* CF_ARG_DISABLE(boxchars) */
#define OPT_BROKEN_OSC 1		/* CF_ARG_ENABLE(broken-osc) */
/* #undef OPT_BROKEN_ST */		/* CF_ARG_DISABLE(broken-st) */
/* #undef OPT_BUILTIN_XPMS */		/* CF_ARG_ENABLE(builtin-xpms) */
#define OPT_C1_PRINT 0		/* CF_ARG_DISABLE(c1-print) */
/* #undef OPT_COLOR_CLASS */		/* CF_ARG_DISABLE(color-class) */
/* #undef OPT_DABBREV */		/* CF_ARG_ENABLE(dabbrev) */
#define OPT_DEC_CHRSET 0		/* CF_ARG_DISABLE(doublechars) */
/* #undef OPT_DEC_LOCATOR */		/* CF_ARG_ENABLE(dec-locator) */
/* #undef OPT_DEC_RECTOPS */		/* CF_ARG_ENABLE(rectangles) */
/* #undef OPT_DIRECT_COLOR */		/* CF_ARG_ENABLE(direct-color) */
#define OPT_DOUBLE_BUFFER 1	/* CF_ARG_ENABLE(double-buffer) */
#define OPT_EXEC_XTERM 1		/* CF_ARG_ENABLE(exec-xterm) */
/* #undef OPT_FIFO_LINES */		/* CF_ARG_ENABLE(fifo-lines) */
#define OPT_GRAPHICS 1		/* CF_ARG_ENABLE(graphics) */
/* #undef OPT_HIGHLIGHT_COLOR */	/* CF_ARG_DISABLE(highlighting) */
#define OPT_HP_FUNC_KEYS 1		/* CF_ARG_ENABLE(hp-fkeys) */
/* #undef OPT_I18N_SUPPORT */		/* CF_ARG_DISABLE(i18n) */
/* #undef OPT_INITIAL_ERASE */	/* CF_ARG_DISABLE(initial-erase) */
#define OPT_INPUT_METHOD 0		/* CF_ARG_DISABLE(input-method) */
#define OPT_ISO_COLORS 0		/* CF_ARG_DISABLE(ansi-color) */
#define OPT_LOAD_VTFONTS 1		/* CF_ARG_ENABLE(load-vt-fonts) */
/* #undef OPT_LUIT_PROG */		/* CF_ARG_ENABLE(luit) */
/* #undef OPT_MAXIMIZE */		/* CF_ARG_DISABLE(maximize) */
/* #undef OPT_MINI_LUIT */		/* CF_ARG_ENABLE(mini-luit) */
#define OPT_NUM_LOCK 0		/* CF_ARG_DISABLE(num-lock) */
#define OPT_PASTE64 1		/* CF_ARG_ENABLE(past64) */
/* #undef OPT_PC_COLORS */		/* CF_ARG_DISABLE(pc-color) */
/* #undef OPT_PRINT_GRAPHICS */	/* CF_ARG_ENABLE(print-graphics) */
#define OPT_PTY_HANDSHAKE 1	/* CF_ARG_ENABLE(pty-handshake) */
/* #undef OPT_READLINE */		/* CF_ARG_ENABLE(readline-mouse) */
/* #undef OPT_REGIS_GRAPHICS */	/* CF_ARG_ENABLE(regis-graphics) */
/* #undef OPT_SAME_NAME */		/* CF_ARG_DISABLE(samename) */
#define OPT_SCO_FUNC_KEYS 1	/* CF_ARG_ENABLE(sco-fkeys) */
#define OPT_SCREEN_DUMPS 0		/* CF_ARG_ENABLE(screen-dumps) */
/* #undef OPT_SELECTION_OPS */	/* CF_ARG_DISABLE(selection-ops) */
#define OPT_SELECT_REGEX 1		/* CF_ARG_DISABLE(regex) */
#define OPT_SESSION_MGT 0		/* CF_ARG_DISABLE(session-mgt) */
#define OPT_SIXEL_GRAPHICS 1	/* CF_ARG_ENABLE(sixel-graphics) */
/* #undef OPT_SUN_FUNC_KEYS */	/* CF_ARG_ENABLE(sun-fkeys) */
#define OPT_TCAP_FKEYS 1		/* CF_ARG_ENABLE(tcap-fkeys) */
#define OPT_TCAP_QUERY 1		/* CF_ARG_ENABLE(tcap-query) */
#define OPT_TEK4014 0		/* CF_ARG_DISABLE(tek4014) */
/* #undef OPT_TOOLBAR */		/* CF_ARG_ENABLE(toolbar) */
/* #undef OPT_VT52_MODE */		/* CF_ARG_DISABLE(vt52) */
/* #undef OPT_WIDER_ICHAR */		/* CF_ARG_ENABLE(16bit-chars) */
/* #undef OPT_WIDE_ATTRS */		/* CF_ARG_DISABLE(wide-attrs) */
/* #undef OPT_WIDE_CHARS */		/* CF_ARG_DISABLE(wide-chars) */
/* #undef OPT_XMC_GLITCH */		/* CF_ARG_ENABLE(xmc-glitch) */
/* #undef OPT_ZICONBEEP */		/* CF_ARG_DISABLE(ziconbeep) */
/* #undef OWN_TERMINFO_DIR */		/* AC_ARG_WITH(own-terminfo) */
/* #undef OWN_TERMINFO_ENV */		/* AC_ARG_ENABLE(env-terminfo) */
#define PROCFS_ROOT "/proc"		/* CF_ARG_ENABLE(exec-xterm) */
/* #undef SCROLLBAR_RIGHT */		/* CF_ARG_ENABLE(rightbar) */
#define SIG_ATOMIC_T volatile sig_atomic_t		/* CF_SIG_ATOMIC_T */
/* #undef STDC_NORETURN */		/* CF_C11_NORETURN */
/* #undef SVR4 */			/* CF_SVR4, imake */
/* #undef SYSV */			/* CF_SYSV, imake */
#define TIME_WITH_SYS_TIME 1	/* AC_HEADER_TIME */
#define TTY_GROUP_NAME "root"		/* CF_TTY_GROUP */
#define USE_LASTLOG 1		/* CF_LASTLOG */
#define USE_POSIX_WAIT 1		/* CF_POSIX_WAIT */
/* #undef USE_STRUCT_LASTLOG */	/* CF_STRUCT_LASTLOG */
#define USE_SYSV_UTMP 1		/* CF_UTMP */
/* #undef USE_SYS_SELECT_H */		/* CF_TYPE_FD_SET */
/* #undef USE_TERMCAP */		/* CF_FUNC_TGETENT */
#define USE_TERMINFO 1		/* CF_FUNC_TGETENT */
#define USE_TTY_GROUP 1		/* CF_TTY_GROUP */
/* #undef USE_UTEMPTER */		/* CF_UTEMPTER */
/* #undef USE_UTMP_SETGID */		/* AC_ARG_WITH(utmp-setgid) */
/* #undef UTMPX_FOR_UTMP */		/* CF_UTMP */
/* #undef XRENDERFONT */		/* CF_X_FREETYPE */
/* #undef cc_t */			/* CF_TYPE_CC_T */
/* #undef gid_t */			/* AC_TYPE_UID_T */
/* #undef mode_t */			/* AC_TYPE_MODE_T */
/* #undef off_t */			/* AC_TYPE_OFF_T */
/* #undef pid_t */			/* AC_TYPE_PID_T */
/* #undef time_t */			/* AC_CHECK_TYPE(time_t, long) */
/* #undef uid_t */			/* AC_TYPE_UID_T */
/* #undef ut_name */			/* CF_UTMP */
#define ut_xstatus ut_exit.e_exit		/* CF_UTMP_UT_XSTATUS */
/* #undef ut_xtime */			/* CF_UTMP_UT_XTIME */

/*
 * Ifdef'd to make it simple to override.
 */
#ifndef OPT_TRACE
/* #undef OPT_TRACE */		/* CF_ARG_ENABLE(trace) */
/* #undef OPT_TRACE_FLAGS */		/* ...no option */
#endif

/*
 * g++ support for __attribute__() is haphazard.
 */
#ifndef __cplusplus
/* #undef GCC_PRINTF */
/* #undef GCC_PRINTFLIKE */
/* #undef GCC_NORETURN */
/* #undef GCC_UNUSED */
#endif

#ifndef HAVE_X11_XPOLL_H
#define NO_XPOLL_H	/* X11R6.1 & up use Xpoll.h for select() definitions */
#endif

/* vile:cmode
 */
#endif /* included_xtermcfg_h */
