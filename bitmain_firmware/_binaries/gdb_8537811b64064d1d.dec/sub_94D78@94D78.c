int __fastcall sub_94D78(const char *a1, int a2)
{
  int v4; // r6
  char *v5; // r0
  int v6; // r3
  int v7; // r8
  char *v8; // r9
  int v9; // r11
  void *v10; // r7
  int v11; // r2
  int v12; // r0
  const char *v13; // r10
  _DWORD *v14; // r3
  void *v15; // r0
  int v16; // r0
  int result; // r0
  const char *v18; // r1
  int v19; // r8
  int v20; // r0
  int v21; // r3
  int v22; // r5
  int v23; // r0
  int v24; // r0
  int v25; // r0
  const char *v26; // r0
  int v27; // r0
  int v28; // r0
  const char *v29; // r0
  int v30; // r0
  const char *v31; // r0
  void *ptr; // [sp+Ch] [bp-20h] BYREF
  int v33; // [sp+10h] [bp-1Ch] BYREF
  int v34; // [sp+14h] [bp-18h] BYREF
  void *v35; // [sp+18h] [bp-14h] BYREF
  _DWORD *v36; // [sp+1Ch] [bp-10h] BYREF
  _DWORD *v37; // [sp+20h] [bp-Ch] BYREF
  _DWORD v38[2]; // [sp+24h] [bp-8h] BYREF

  v4 = *(_DWORD *)(dword_487D2C + 8);
  sub_1627EC(v4);
  sub_94C84();
  if ( a1 )
  {
    ptr = 0;
    v33 = 0;
    if ( sub_16258C(a1) )
    {
      if ( !off_489B70() )
      {
        v10 = (void *)dword_475508;
        if ( dword_475508 )
        {
          sub_946D8("writing into executable files is not supported for %s sysroots", "target:");
          v10 = 0;
        }
        v8 = 0;
        v11 = dword_47ACA8;
        v13 = a1;
        v18 = a1;
        v9 = 1;
        v7 = -1;
        goto LABEL_20;
      }
      a1 += 7;
    }
    v5 = getenv("PATH");
    v6 = dword_475508;
    if ( dword_475508 )
      v6 = 2;
    v7 = ((int (__fastcall *)(char *, int, const char *, int, _DWORD *))loc_203B0C)(v5, 1, a1, v6, v38);
    if ( v7 < 0 )
      sub_258B2C(a1);
    v8 = (char *)v38[0];
    sub_984CC(&v35, v38[0]);
    v9 = dword_475508;
    v10 = v35;
    v11 = dword_47ACA8;
    if ( dword_475508 )
    {
      v12 = sub_162E4C(&v36, v35, dword_47ACA8, "r+b", v7);
      v13 = a1;
      v14 = v36;
      a1 = v8;
      v9 = 0;
LABEL_21:
      v19 = dword_487D2C;
      *(_DWORD *)(dword_487D2C + 8) = v14;
      if ( !v14 )
      {
        v30 = sub_2A6938(v12);
        v31 = (const char *)sub_2A6948(v30);
        sub_94708("\"%s\": could not open as an executable file: %s.", a1, v31);
      }
      if ( *(_DWORD *)(v19 + 16) )
      {
        v23 = sub_94728(
                (int)"exec.c",
                342,
                "%s: Assertion `%s' failed.",
                "void exec_file_attach(const char*, int)",
                "exec_filename == NULL");
        if ( v4 )
          v23 = ((int (__fastcall *)(int))loc_1625D0)(v4);
        sub_339024(v23);
      }
      if ( v9 )
      {
        v20 = sub_32727C(*v14);
        v21 = dword_487D2C;
        *(_DWORD *)(v19 + 16) = v20;
      }
      else
      {
        sub_98500(v38, a1);
        v21 = dword_487D2C;
        *(_DWORD *)(dword_487D2C + 16) = v38[0];
      }
      if ( !sub_2AA0E8(*(_DWORD *)(v21 + 8), 1, &v34) )
      {
        sub_94C84();
        v25 = sub_2A6938(v24);
        v26 = (const char *)sub_25B168(v25, v34);
        sub_94708("\"%s\": not in executable format: %s", a1, v26);
      }
      if ( sub_948EC(*(_DWORD *)(dword_487D2C + 8), &ptr, &v33) )
      {
        sub_94C84();
        v28 = sub_2A6938(v27);
        v29 = (const char *)sub_2A6948(v28);
        sub_94708("\"%s\": can't find the file sections: %s", a1, v29);
      }
      v22 = dword_487D2C;
      *(_DWORD *)(v22 + 12) = sub_2A8BB0(*(_DWORD *)(dword_487D2C + 8));
      sub_FA5D0();
      sub_B839C(*(_DWORD *)(dword_487D2C + 8));
      sub_94970(dword_487D2C + 8, (int)ptr, v33);
      v15 = ptr;
      if ( ptr )
        free(ptr);
      if ( off_47ACB4 )
        v15 = (void *)off_47ACB4(v13);
      if ( v8 )
        free(v8);
      if ( v10 )
        free(v10);
      goto LABEL_14;
    }
    v13 = a1;
    v18 = (const char *)v35;
    a1 = v8;
LABEL_20:
    v12 = ((int (__fastcall *)(_DWORD **, const char *, int, int))loc_1629B4)(&v37, v18, v11, v7);
    v14 = v37;
    goto LABEL_21;
  }
  if ( a2 )
    sub_259880("No executable file now.\n");
  v15 = (void *)sub_B839C(0);
LABEL_14:
  v16 = sub_2A8F8C(v15);
  result = sub_1B92F8(v16);
  if ( v4 )
    return ((int (__fastcall *)(int))loc_1625D0)(v4);
  return result;
}
