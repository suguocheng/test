#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
//char *strbuf_detach(struct strbuf *sb, size_t *sz);
int strbuf_cmp(const struct strbuf *first, const struct strbuf *second);
void strbuf_reset(struct strbuf *sb);
void strbuf_grow(struct strbuf *sb, size_t extra);
void strbuf_add(struct strbuf *sb, const void *data, size_t len);
int main(void)
{
    struct strbuf sb;
    strbuf_init(&sb, 10);
    strbuf_attach(&sb, "xiyou", 5, 10);
}
void strbuf_init(struct strbuf *sb, size_t alloc)
{
    sb->alloc=alloc;
    sb->buf=(char*)calloc(alloc,sizeof(char));
}
void strbuf_attach(struct strbuf *sb, void *str, size_t len, size_t alloc)
{
    if(len+1<=sb->alloc)
    {
        memcpy(sb->buf,str,len);
    }
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
/*char *strbuf_detach(struct strbuf *sb, size_t *sz)
{

}*/
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
    }
}
void strbuf_add(struct strbuf *sb, const void *data, size_t len)
{
    if(sb->len+len>sb->alloc)
    {
        sb->buf=(char*)realloc(sb->buf,sb->len+len);
        strcpy(sb->buf+sb->len,data);//?
    }
}