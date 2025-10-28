void __fastcall sub_5F31C(int a1, int a2, int a3)
{
  int v5; // r5
  char *v6; // r8
  char *v7; // r4
  bool v8; // zf
  int v9; // r0
  int v10; // r3
  int v11; // r3
  int v12; // r1
  int v13; // r0
  int v14; // r0
  int *v15; // r6
  int *v16; // r9
  int v17; // t1
  char *v18; // r4
  void *v19; // r0
  int v21; // [sp+Ch] [bp-40h] BYREF
  char v22[4]; // [sp+14h] [bp-38h] BYREF
  int v23; // [sp+18h] [bp-34h] BYREF
  int v24; // [sp+1Ch] [bp-30h]
  int v25; // [sp+20h] [bp-2Ch]
  char *v26; // [sp+24h] [bp-28h] BYREF
  void *v27; // [sp+28h] [bp-24h]
  void *ptr[2]; // [sp+30h] [bp-1Ch] BYREF
  _BYTE v29[20]; // [sp+38h] [bp-14h] BYREF

  v21 = a1;
  v5 = *(_DWORD *)sub_243004(a1);
  sub_27229C(&v26, &v21, a3);
  v6 = (char *)v27;
  if ( v26 == v27 )
    goto LABEL_43;
  v7 = v26 + 28;
  do
  {
    while ( 1 )
    {
      v24 = 0;
      v25 = 0;
      if ( sub_690C0(v5) > 1 )
      {
        if ( (_BYTE)v25 )
        {
          LOBYTE(v25) = 0;
          sub_257374(v24, 0);
        }
        v24 = v5;
        sub_2578D4(v5, 0);
        LOBYTE(v25) = 1;
      }
      v9 = sub_26FC80(*((_DWORD *)v7 - 7));
      sub_257610(v5, "name", v9);
      v10 = *((_DWORD *)v7 - 5);
      switch ( v10 )
      {
        case 1:
          sub_257610(v5, "in_scope", "false");
          goto LABEL_16;
        case 0:
          if ( sub_5E6EC(*((_DWORD *)v7 - 7), a2) )
          {
            sub_271660(ptr, *((_DWORD *)v7 - 7));
            sub_257610(v5, "value", ptr[0]);
            if ( ptr[0] != v29 )
              sub_339E8C(ptr[0]);
          }
          sub_257610(v5, "in_scope", "true");
LABEL_16:
          v11 = (unsigned __int8)*(v7 - 24);
          if ( *((_DWORD *)v7 - 5) == 2 )
            goto LABEL_20;
          goto LABEL_17;
        case 2:
          sub_257610(v5, "in_scope", "invalid");
          goto LABEL_16;
      }
      v11 = (unsigned __int8)*(v7 - 24);
LABEL_17:
      if ( v11 )
        sub_257610(v5, "type_changed", "true");
      else
        sub_257610(v5, "type_changed", "false");
      v11 = (unsigned __int8)*(v7 - 24);
LABEL_20:
      v12 = *((_DWORD *)v7 - 7);
      if ( v11 )
      {
        sub_26FD94(ptr, v12);
        sub_257610(v5, "new_type", ptr[0]);
        if ( ptr[0] != v29 )
          sub_339E8C(ptr[0]);
        v12 = *((_DWORD *)v7 - 7);
        if ( *(v7 - 24) )
          goto LABEL_22;
      }
      if ( *(v7 - 23) )
      {
LABEL_22:
        v13 = sub_271FE4(v12);
        sub_25752C(v5, "new_num_children", v13);
        v12 = *((_DWORD *)v7 - 7);
      }
      sub_26FCB0(ptr, v12);
      if ( ptr[0] )
        sub_257610(v5, "displayhint", ptr[0]);
      if ( sub_26FFB4(*((_DWORD *)v7 - 7)) )
        sub_25752C(v5, "dynamic", 1);
      sub_26FFC8(*((_DWORD *)v7 - 7), v22, &v23);
      v14 = sub_26FCBC(*((_DWORD *)v7 - 7), v23);
      sub_25752C(v5, "has_more", v14);
      if ( *((_DWORD *)v7 - 3) != *((_DWORD *)v7 - 2) )
      {
        sub_2578D4(v5, 1);
        v15 = (int *)*((_DWORD *)v7 - 3);
        v16 = (int *)*((_DWORD *)v7 - 2);
        while ( v16 != v15 )
        {
          v17 = *v15++;
          sub_2578D4(v5, 0);
          sub_5E758(v17, a2, 1);
          sub_257374(v5, 0);
        }
        sub_257374(v5, 1);
      }
      if ( ptr[0] )
        free(ptr[0]);
      if ( (_BYTE)v25 )
        break;
      v8 = v6 == v7;
      v7 += 28;
      if ( v8 )
        goto LABEL_38;
    }
    LOBYTE(v25) = 0;
    sub_257374(v24, 0);
    v8 = v6 == v7;
    v7 += 28;
  }
  while ( !v8 );
LABEL_38:
  v18 = v26;
  v6 = (char *)v27;
  if ( v26 != v27 )
  {
    do
    {
      v19 = (void *)*((_DWORD *)v18 + 4);
      if ( v19 )
        sub_339E8C(v19);
      v18 += 28;
    }
    while ( v6 != v18 );
    v6 = v26;
  }
LABEL_43:
  if ( v6 )
    sub_339E8C(v6);
}
