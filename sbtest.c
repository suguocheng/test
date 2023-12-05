#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
struct strbuf
{
    int len;//缓冲区字符串长度
    int alloc;//缓冲区容量
    char*buf;//缓冲区字符串
};
void strbuf_init(struct strbuf *sb, size_t alloc);
void strbuf_attach(struct strbuf *sb, void *str, size_t len, size_t alloc);
void strbuf_release(struct strbuf *sb);
void strbuf_swap(struct strbuf *a, struct strbuf *b);
char *strbuf_detach(struct strbuf *sb, size_t *sz);
int strbuf_cmp(const struct strbuf *first, const struct strbuf *second);
void strbuf_reset(struct strbuf *sb);
void strbuf_grow(struct strbuf *sb, size_t extra);
void strbuf_add(struct strbuf *sb, const void *data, size_t len);
void strbuf_addch(struct strbuf *sb, int c);
void strbuf_addstr(struct strbuf *sb, const char *s);
void strbuf_addbuf(struct strbuf *sb, const struct strbuf *sb2);
void strbuf_setlen(struct strbuf *sb, size_t len);
size_t strbuf_avail(const struct strbuf *sb);
void strbuf_insert(struct strbuf *sb, size_t pos, const void *data, size_t len);
int main(void)
{
    struct strbuf sb;
    strbuf_init(&sb, 10);
    strbuf_attach(&sb, "xiyou", 5, 10);
    strbuf_attach(&sb, "xiyou", 5, 10);
    assert(strcmp(sb.buf, "xiyou") == 0);
    strbuf_addstr(&sb, "linux");
    assert(strcmp(sb.buf, "xiyoulinux") == 0);
    strbuf_release(&sb);
}
void strbuf_init(struct strbuf *sb, size_t alloc)
{
    sb->alloc=alloc;
    sb->len=0;
    sb->buf=(char*)calloc(alloc,sizeof(char));
}
void strbuf_attach(struct strbuf *sb, void *str, size_t len, size_t alloc)
{
    strbuf_grow(sb,len+1);
    strcat(sb->buf,(char*)str);
    strbuf_setlen(sb,len+1);
}
void strbuf_release(struct strbuf *sb)
{
    free(sb->buf);
}
void strbuf_swap(struct strbuf *a, struct strbuf *b)
{
    struct strbuf temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
char *strbuf_detach(struct strbuf *sb, size_t *sz)
{
    *sz=sb->alloc;
    return sb->buf;
}
int strbuf_cmp(const struct strbuf *first, const struct strbuf *second)
{
    if(first->alloc==second->alloc)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void strbuf_reset(struct strbuf *sb)
{
    
}
void strbuf_grow(struct strbuf *sb, size_t extra)
{
    if(sb->alloc-sb->len<extra)
    {
        sb->buf=(char*)realloc(sb->buf,(sb->len+extra)*sizeof(char));
        sb->alloc=sb->len+extra;
    }
}
void strbuf_add(struct strbuf *sb, const void *data, size_t len)
{
    strbuf_grow(sb,len);
    strcat(sb->buf,(char*)data);
    strbuf_setlen(sb,sb->len+len);
}
void strbuf_addch(struct strbuf *sb, int c)
{
    strbuf_grow(sb,1);
    char str[2]={c,'\0'};
    strcat(sb->buf,str);
    strbuf_setlen(sb,sb->len+1);
}
void strbuf_addstr(struct strbuf *sb, const char *s)
{
    strbuf_grow(sb,strlen(s));
    strcat(sb->buf,s);
    strbuf_setlen(sb,sb->len+strlen(s));
}
void strbuf_addbuf(struct strbuf *sb, const struct strbuf *sb2)
{
    strbuf_grow(sb,strlen(sb2->buf));
    strcat(sb->buf,sb2->buf);
    strbuf_setlen(sb,sb->len+sb2->len);
}
void strbuf_setlen(struct strbuf *sb, size_t len)
{
    sb->len=len;
}
size_t strbuf_avail(const struct strbuf *sb)
{
    size_t avail=sb->alloc-sb->len;
    return avail;
}
void strbuf_insert(struct strbuf *sb, size_t pos, const void *data, size_t len)
{
    strbuf_grow(sb,len);
    memcpy(sb->buf+pos,(char*)data,len);
    strbuf_setlen(sb,sb->len+len);
}