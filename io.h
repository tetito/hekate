/*
Copyright (c) 2009 by Juliusz Chroboczek.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

typedef struct cpc_timeout cpc_timeout;

cps cpc_timeout *cpc_timeout_get(int secs, int usecs);
cpc_condvar *cpc_timeout_condvar(cpc_timeout *timeout);
int cpc_timeout_expired(cpc_timeout *timeout);
cps void cpc_timeout_destroy(cpc_timeout *timeout);

cps int cpc_full_read(int fd, char *buf, int len);
cps int cpc_partial_read(int fd, unsigned char *buf, int min_len, int max_len);
cps int cpc_full_write(int fd, const char *buf, int len);
cps int cpc_full_writev(int fd, const struct iovec *iov, int iovcnt);
