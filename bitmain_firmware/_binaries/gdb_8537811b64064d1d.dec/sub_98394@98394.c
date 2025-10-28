void *__fastcall sub_98394(size_t a1)
{
  size_t v1; // r4
  void *result; // r0
  void *v3; // r7
  __int64 v4; // kr00_8
  int *v5; // r4
  void *v6; // r0
  _DWORD *v7; // r0
  int v8; // [sp+4h] [bp-10h]
  int v9; // [sp+8h] [bp-Ch]
  int v10; // [sp+Ch] [bp-8h]

  if ( a1 )
    v1 = a1;
  else
    v1 = 1;
  result = malloc(v1);
  if ( !result )
  {
    v3 = sub_92E50();
    v4 = sub_258C44(v1);
    sub_92E68((int)v3);
    if ( HIDWORD(v4) == 1 )
    {
      v5 = (int *)sub_339EA0(v4);
      v6 = sub_9263C();
      sub_92648(v6);
      v7 = (_DWORD *)sub_33AB8C(16);
      v8 = *v5;
      v9 = v5[1];
      v10 = v5[2];
      *v7 = off_36FA68;
      v7[1] = v8;
      v7[2] = v9;
      v7[3] = v10;
      sub_33A7A8(v7, &`typeinfo for'gdb_quit_bad_alloc, sub_98480);
    }
    sub_339EA0(v4);
    sub_92E88();
  }
  return result;
}
