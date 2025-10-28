int *__fastcall sub_F4168(_DWORD **a1, int a2, int a3, char *format, __gnuc_va_list arg)
{
  _DWORD *v6; // r5
  int *result; // r0
  int v10; // r3
  int v11; // r2
  int v12; // r2
  unsigned int v13; // r6
  void *v14; // r0
  _DWORD *v15; // r0
  int v17; // r0
  _DWORD *v18; // r0
  int v19; // r0
  _DWORD *v20; // r0
  __int64 v21; // r0
  void *ptr; // [sp+8h] [bp-18h] BYREF
  char v23; // [sp+10h] [bp-10h] BYREF

  v6 = *a1;
  if ( !*a1 )
  {
    v6 = sub_93050(0xCu);
    *v6 = &unk_47AC74;
    *a1 = v6;
    result = (int *)&unk_47AC74;
    v6[1] = 0;
    v6[2] = 0;
    goto LABEL_5;
  }
  result = (int *)*v6;
  if ( *v6 )
  {
LABEL_5:
    while ( format != (char *)result[2] || a2 != *result || a3 != result[1] )
    {
      result = (int *)result[4];
      if ( !result )
        goto LABEL_9;
    }
    v10 = result[3] + 1;
  }
  else
  {
LABEL_9:
    result = (int *)sub_93050(0x14u);
    v11 = *v6;
    v10 = 1;
    result[2] = (int)format;
    *result = a2;
    result[1] = a3;
    result[3] = 0;
    result[4] = v11;
    *v6 = result;
  }
  v12 = dword_47AC88;
  result[3] = v10;
  if ( v12 >= v10 )
  {
    if ( dword_48A514 )
      v13 = 3;
    else
      v13 = v6[1];
    if ( (char *)result[2] == format )
    {
      if ( *result )
      {
        v14 = (void *)sub_25C3EC(*result, result[1], format, arg);
      }
      else if ( off_48A57C )
      {
        v14 = (void *)off_48A57C(format, arg);
      }
      else if ( v6[2] )
      {
        sub_9326C((char **)&ptr, format, arg);
        v17 = sub_259B80("");
        if ( v13 != 3 )
          v17 = sub_25A6F0(v17);
        v18 = (_DWORD *)sub_242FDC(v17);
        v19 = sub_25A440(
                *v18,
                "%s%s%s",
                *(const char **)(v6[2] + 8 * v13),
                (const char *)ptr,
                *(const char **)(v6[2] + 8 * v13 + 4));
        if ( v13 )
        {
          sub_259B80("");
        }
        else
        {
          v20 = (_DWORD *)sub_242FDC(v19);
          sub_25A6E4(&word_356660, *v20);
        }
        v14 = ptr;
        if ( ptr != &v23 )
          sub_339E8C(ptr);
      }
      else
      {
        v14 = (void *)sub_25BD94(format, arg);
      }
      if ( v13 == 1 || v13 && v13 <= 3 )
        v6[1] = 3;
      v15 = (_DWORD *)sub_242FDC(v14);
      return (int *)sub_256834(*v15);
    }
    else
    {
      v21 = sub_94728(
              (int)"complaints.c",
              182,
              "%s: Assertion `%s' failed.",
              "void vcomplaint(complaints**, const char*, int, const char*, va_list)",
              "complaint->fmt == fmt");
      return (int *)sub_F43DC(v21, (const char *)HIDWORD(v21));
    }
  }
  return result;
}
