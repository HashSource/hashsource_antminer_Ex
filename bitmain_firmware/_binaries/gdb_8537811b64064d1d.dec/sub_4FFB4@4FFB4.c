int __fastcall sub_4FFB4(char *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r7
  const char *v5; // r6
  size_t v6; // r0
  _BYTE *v7; // r8
  size_t v8; // r0
  int v9; // r0
  unsigned int v10; // r4
  unsigned int v11; // r3
  int result; // r0
  _DWORD *v13; // r0
  const char *v14; // r4
  const char *v15; // r0
  int v16; // [sp+8h] [bp-100h] BYREF
  const char **v17; // [sp+Ch] [bp-FCh] BYREF
  unsigned int v18; // [sp+10h] [bp-F8h]
  void *ptr; // [sp+18h] [bp-F0h] BYREF
  _BYTE v20[16]; // [sp+20h] [bp-E8h] BYREF
  _BYTE v21[108]; // [sp+30h] [bp-D8h] BYREF
  _BYTE v22[108]; // [sp+9Ch] [bp-6Ch] BYREF

  v2 = sub_243C5C();
  if ( dword_46D36C )
  {
    if ( !a1 )
      a1 = "";
    sub_F64E8(v21);
    v3 = sub_F64E8(v22);
    v16 = 0;
    v4 = sub_92E50(v3);
    v5 = (const char *)((int (__fastcall *)(_BYTE *, char *, int *))loc_F5878)(v21, a1, &v16);
    if ( v21[88] )
    {
      v7 = v21;
    }
    else
    {
      v6 = strlen(a1);
      sub_F57E8(v22, v5, a1, v6);
      v7 = v22;
    }
    sub_92E68(v4);
    ptr = v20;
    sub_4FF04(&ptr, a1, (int)v5);
    v8 = strlen(a1);
    sub_F59DC(&v17, v7, v5, v5 - a1, v8);
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        v9 = sub_259880("%s%s\n", (const char *)ptr, *v17);
        v11 = v18;
      }
      else
      {
        v9 = sub_F7D04(&v17);
        v10 = 0;
        while ( 1 )
        {
          v11 = v18;
          if ( v18 <= v10 )
            break;
          sub_259880("%s%s", (const char *)ptr, v17[++v10]);
          if ( v16 )
            sub_259880("%c", v16);
          v9 = sub_259880((const char *)&word_356660);
        }
      }
      if ( dword_46D36C == v11 )
      {
        v14 = (const char *)ptr;
        v15 = (const char *)sub_F5EBC(v9);
        sub_259880("%s%s %s\n", v14, v5, v15);
      }
    }
    sub_F5DA8(&v17);
    if ( ptr != v20 )
      sub_339E8C(ptr);
    sub_F56D8(v22);
    return sub_F56D8(v21);
  }
  else
  {
    v13 = (_DWORD *)sub_243004(v2);
    result = sub_257418(*v13);
    if ( !result )
      return sub_259880("max-completions is zero, completion is disabled.\n");
  }
  return result;
}
