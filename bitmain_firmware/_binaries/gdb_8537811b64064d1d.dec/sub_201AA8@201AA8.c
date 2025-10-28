int __fastcall sub_201AA8(int a1, int a2)
{
  const char **v3; // r0
  int v4; // r4
  int v5; // r2
  int v6; // r2
  void *v7; // r5
  int v8; // r7
  void *v9; // r6
  const char *v10; // r5
  int v11; // r3
  int v12; // r0
  int *v13; // r0
  int v14; // r4
  _DWORD *v16; // r3
  int v17; // [sp+8h] [bp-1Ch]
  void *ptr; // [sp+Ch] [bp-18h]
  const char **v19; // [sp+1Ch] [bp-8h] BYREF

  v3 = (const char **)sub_211D18(a2, 0);
  if ( v3 )
    v3 = (const char **)sub_259880("Loading symbols for shared libraries.\n");
  v4 = *(_DWORD *)(dword_487D2C + 48);
  if ( v4 )
  {
    if ( a2 )
      v5 = 10;
    else
      v5 = 8;
    v17 = v5;
    do
    {
      v8 = *(unsigned __int8 *)(v4 + 1040);
      v9 = (void *)sub_29B938(v4 + 8);
      sub_200944(&v19, (int)v9);
      v3 = v19;
      if ( v19 )
      {
        v10 = *v19;
        v11 = v8;
        if ( v8 )
          v11 = 1;
        if ( v10 )
          v11 = 0;
        if ( v11 )
        {
          v10 = 0;
        }
        else
        {
          if ( !v10 )
            goto LABEL_19;
          if ( !j_strcmp(*v19, (const char *)(v4 + 520)) )
          {
LABEL_13:
            if ( !v8 || j_strcmp(v10, (const char *)(v4 + 520)) )
            {
              v7 = sub_92E50();
              sub_2003A8(v4);
              sub_92E68((int)v7);
              if ( v8 | dword_46DBA8 || sub_338BFC(v4 + 520, "/libpthread") )
                sub_200AB4(v4, v17);
            }
            goto LABEL_18;
          }
        }
      }
      else
      {
        if ( !v8 )
          goto LABEL_20;
        v10 = 0;
      }
      v6 = *(_DWORD *)(v4 + 1044);
      if ( v6 && (*(_DWORD *)(v6 + 12) & 8) == 0 )
      {
        v16 = *(_DWORD **)(dword_487D2C + 48);
        if ( v16 )
        {
          while ( v16 == (_DWORD *)v4 || v6 != v16[261] )
          {
            v16 = (_DWORD *)*v16;
            if ( !v16 )
              goto LABEL_39;
          }
        }
        else
        {
LABEL_39:
          ptr = *(void **)(v4 + 1044);
          ((void (__fastcall *)(void *))loc_1B7628)(ptr);
          sub_33AC2C(ptr);
        }
      }
      ((void (__fastcall *)(int))loc_94B68)(v4);
      sub_200324(v4);
      if ( v10 )
        goto LABEL_13;
LABEL_18:
      v3 = v19;
      if ( v19 )
LABEL_19:
        v3 = (const char **)((int (*)(void))loc_1625D0)();
LABEL_20:
      if ( v9 )
        free(v9);
      v4 = *(_DWORD *)v4;
    }
    while ( v4 );
  }
  v12 = sub_16F67C((int)v3);
  v13 = (int *)((int (__fastcall *)(int, int))loc_16ECB0)(v12, dword_4893A0);
  v14 = *v13;
  if ( sub_22EBE4(v13) )
  {
    (*(void (**)(void))(v14 + 12))();
    sub_DB734();
    sub_201A78(a2);
  }
  sub_20168C(0, 0, dword_46DBA8);
  sub_DC44C();
  return sub_15D7A0();
}
