/*	$NetBSD: extern.h,v 1.12 2011/08/30 19:27:37 joerg Exp $	*/

/*
 * Copyright (c) 1989, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *      @(#)extern.h	8.1 (Berkeley) 6/6/93
 */

#include <sys/cdefs.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <stdio.h>

/*
 * from stty.h
 */
struct info {
	int fd;                                 /* file descriptor */
	int ldisc;                              /* line discipline */  
	int off;                                /* turn off */
	int set;                                /* need set */
	int wset;                               /* need window set */
	char *arg;                              /* argument */
	struct termios t;                       /* terminal info */  
	struct winsize win;                     /* window info */
}; 

int        ksearch(char ***, struct info *);
int        msearch(char ***, struct info *);
void       printjob(void) __dead;
void       recvjob(void);
void       sttyclearflags(struct termios *tp, int flags);
void       sttysetflags(struct termios *tp, int flags);
void       sttyclearlflags(struct termios *tp, int flags);
void       sttysetlflags(struct termios *tp, int flags);
