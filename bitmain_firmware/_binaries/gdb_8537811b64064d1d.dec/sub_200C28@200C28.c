void __fastcall sub_200C28(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r7
  char *v5; // r8
  int v6; // r9
  char *v7; // r5
  char **v8; // r9
  char *v9; // t1
  char *v10; // r4
  char *v11; // r6
  int (__fastcall *v12)(char *, char *); // r3
  const char *v13; // r6
  int v14; // r4
  unsigned int v15; // r2
  unsigned int v16; // r3
  void *v17; // r7
  int v18; // r7
  unsigned int *v19; // r0
  unsigned int *v20; // r0
  unsigned int v21; // r2
  unsigned int v22; // r3
  _DWORD *v23; // r4
  char *v24; // r3
  int v25; // r0
  void *v26; // r6
  __int64 v27; // kr00_8
  __int64 v28; // r0
  int v29; // r7
  int *v30; // r0
  int v31; // r0
  char *v32; // [sp+Ch] [bp-8h] BYREF

  v2 = sub_16F67C(a1);
  v3 = ((int (__fastcall *)(int, int))loc_16ECB0)(v2, dword_4893A0);
  v4 = *(_DWORD *)v3;
  v5 = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v3 + 20))(v3);
  v32 = v5;
  if ( !sub_22EBE4(v5) || sub_98FA0(&dword_4878EC, &dword_475848) )
  {
    v6 = dword_487D2C;
  }
  else
  {
    v25 = sub_1836B0();
    v6 = dword_487D2C;
    if ( *(_BYTE *)(v25 + 120) && !*(_DWORD *)(dword_487D2C + 32) )
    {
      v26 = sub_92E50();
      (*(void (__fastcall **)(int))(v4 + 24))(a1);
      sub_92E68((int)v26);
      v6 = dword_487D2C;
    }
  }
  v9 = *(char **)(v6 + 48);
  v8 = (char **)(v6 + 48);
  v7 = v9;
  while ( v7 )
  {
    if ( v5 )
    {
      v10 = v5;
      v11 = (char *)&v32;
      do
      {
        v12 = *(int (__fastcall **)(char *, char *))(v4 + 44);
        if ( v12 )
        {
          if ( v12(v7, v10) )
            goto LABEL_9;
        }
        else if ( !j_strcmp(v7 + 8, v10 + 8) )
        {
LABEL_9:
          v8 = (char **)v7;
          *(_DWORD *)v11 = *(_DWORD *)v10;
          sub_200A58(v10);
          v7 = *(char **)v7;
          v5 = v32;
          goto LABEL_10;
        }
        v11 = v10;
        v10 = *(char **)v10;
      }
      while ( v10 );
    }
    sub_1B95F8((int)v7);
    v14 = dword_487D2C;
    v13 = (const char *)sub_32727C(v7 + 520);
    v20 = *(unsigned int **)(v14 + 60);
    if ( !v20 || (v21 = v20[1], v22 = *v20, v21 == *v20) )
    {
      v20 = sub_9A008(v20, 1);
      v22 = *v20;
      v21 = v20[1];
      *(_DWORD *)(v14 + 60) = v20;
    }
    if ( v22 >= v21 )
    {
      v27 = sub_94728(
              (int)"solib.c",
              847,
              "%s: Assertion `%s' failed.",
              "char** VEC_char_ptr_quick_push(VEC_char_ptr*, char_ptr, const char*, unsigned int)",
              "quick_push");
      sub_92E68(v4);
      v28 = v27;
      goto LABEL_46;
    }
    *v20 = v22 + 1;
    v20[v22 + 2] = (unsigned int)v13;
    *v8 = *(char **)v7;
    v23 = (_DWORD *)*((_DWORD *)v7 + 261);
    if ( v23 && (v23[3] & 8) == 0 )
    {
      v24 = *(char **)(dword_487D2C + 48);
      if ( v24 )
      {
        while ( v7 == v24 || v23 != *((_DWORD **)v24 + 261) )
        {
          v24 = *(char **)v24;
          if ( !v24 )
            goto LABEL_39;
        }
      }
      else
      {
LABEL_39:
        ((void (__fastcall *)(_DWORD))loc_1B7628)(*((_DWORD *)v7 + 261));
        sub_33AC2C(v23);
      }
    }
    ((void (__fastcall *)(char *))loc_94B68)(v7);
    sub_200A58(v7);
    v7 = *v8;
LABEL_10:
    ;
  }
  if ( v5 )
  {
    v7 = 0;
    v13 = "Error while mapping shared library sections:\n";
    v14 = 0;
    *v8 = v5;
    do
    {
      v18 = dword_487D2C;
      *((_DWORD *)v5 + 258) = dword_487D2C;
      v19 = *(unsigned int **)(v18 + 56);
      if ( !v19 || (v15 = v19[1], v16 = *v19, v15 == *v19) )
      {
        v19 = sub_9A008(v19, 1);
        v16 = *v19;
        v15 = v19[1];
        *(_DWORD *)(v18 + 56) = v19;
      }
      if ( v15 <= v16 )
      {
        v28 = sub_94728(
                (int)"solib.c",
                883,
                "%s: Assertion `%s' failed.",
                "so_list** VEC_so_list_ptr_quick_push(VEC_so_list_ptr*, so_list_ptr, const char*, unsigned int)",
                "quick_push");
LABEL_46:
        if ( HIDWORD(v28) != 3 )
        {
          sub_339EA0(v28);
          sub_92E88();
        }
        v29 = sub_339EA0(v28);
        v30 = (int *)sub_242FDC(v29);
        v31 = sub_154BB0(*v30, *(_DWORD *)v29, *(_DWORD *)(v29 + 4), *(const char **)(v29 + 8), v13);
        sub_339F20(v31);
      }
      else
      {
        *v19 = v16 + 1;
        v19[v16 + 2] = (unsigned int)v5;
        v17 = sub_92E50();
        if ( !sub_2003A8((int)v5) )
        {
          ++v14;
          if ( !v7 )
            v7 = v5 + 8;
        }
        sub_92E68((int)v17);
      }
      sub_1B953C((int)v5);
      v5 = *(char **)v5;
    }
    while ( v5 );
    if ( v14 == 1 )
    {
      sub_946D8(
        "Could not load shared library symbols for %s.\nDo you need \"set solib-search-path\" or \"set sysroot\"?",
        v7);
    }
    else if ( v14 > 1 )
    {
      sub_946D8(
        "Could not load shared library symbols for %d libraries, e.g. %s.\n"
        "Use the \"info sharedlibrary\" command to see the complete listing.\n"
        "Do you need \"set solib-search-path\" or \"set sysroot\"?",
        v14,
        v7);
    }
  }
}
