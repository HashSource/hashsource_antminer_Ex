char *__fastcall sub_2C7314(char *a1, const void *a2, size_t a3)
{
  char *v8; // [sp+14h] [bp-10h]
  size_t n; // [sp+1Ch] [bp-8h]

  n = strlen(a1) + 1;
  v8 = (char *)malloc((-n & 3) + n + a3 + 12);
  if ( !v8 )
    return 0;
  memcpy(v8 + 12, a1, n);
  *(_DWORD *)v8 = sub_2C72AC((unsigned __int8 *)a1);
  *((_DWORD *)v8 + 1) = &v8[(-n & 3) + 12 + n];
  memcpy(*((void **)v8 + 1), a2, a3);
  return v8;
}
