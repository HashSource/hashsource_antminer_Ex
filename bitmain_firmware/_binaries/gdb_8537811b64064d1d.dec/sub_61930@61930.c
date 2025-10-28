int __fastcall sub_61930(int a1, int a2, int a3)
{
  int result; // r0
  _DWORD *v4; // r5
  int v5; // r3
  int i; // r0
  int v7; // r7
  char *v8; // r2
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // [sp+8h] [bp-2Ch]
  int v13; // [sp+Ch] [bp-28h] BYREF
  int v14; // [sp+10h] [bp-24h]
  int v15; // [sp+14h] [bp-20h]
  int v16; // [sp+1Ch] [bp-18h] BYREF
  int v17; // [sp+20h] [bp-14h] BYREF
  int v18; // [sp+24h] [bp-10h] BYREF
  int v19; // [sp+28h] [bp-Ch]
  int v20; // [sp+2Ch] [bp-8h]

  v13 = a1;
  v14 = a2;
  v15 = a3;
  if ( sub_98FA0(&v13, &dword_46BBCC) || sub_98FE0(&v13) )
    result = ((int (*)(void))loc_23DC0C)();
  else
    result = sub_23E430(v13, v14, v15);
  if ( !*(_DWORD *)(result + 124) )
  {
    v4 = (_DWORD *)dword_48769C;
    v5 = dword_487668;
    dword_487668 = dword_48769C;
    v12 = v5;
    if ( dword_48769C )
    {
      for ( i = sub_191AE8(result); ; i = sub_191AE8(result) )
      {
        result = sub_60614(i);
        v7 = result;
        if ( !result )
          goto LABEL_26;
        v16 = dword_46DC04;
        sub_22F070(result);
        v18 = v13;
        v19 = v14;
        v20 = v15;
        if ( !dword_46BA08 && dword_474884 )
        {
          v8 = (char *)dword_474874;
          if ( !dword_474874 )
            v8 = "";
          sub_2594D8(*(_DWORD *)(v7 + 36), "%s^running\n", v8);
        }
        if ( ps_getpid_0(&v18) == -1 )
          goto LABEL_30;
        if ( !sub_98FE0(&v18) )
        {
          v10 = sub_23E430(v18, v19, v20);
          if ( !v10 )
          {
            sub_94728(
              "mi/mi-interp.c",
              1016,
              "%s: Assertion `%s' failed.",
              "void mi_on_resume_1(mi_interp*, ptid_t)",
              "ti");
            v11 = sub_62BA4(&v16);
            dword_487668 = v12;
            sub_339024(v11);
          }
          sub_2594D8(*(_DWORD *)(v7 + 36), "*running,thread-id=\"%d\"\n", *(_DWORD *)(v10 + 20));
          goto LABEL_17;
        }
        v17 = 0;
        sub_183B60(sub_603B8, &v17);
        if ( v17 == 1 )
LABEL_30:
          sub_2594D8(*(_DWORD *)(v7 + 36), "*running,thread-id=\"all\"\n");
        else
          sub_23E4C8(sub_6086C, &v18);
LABEL_17:
        v9 = *(_DWORD *)(v7 + 36);
        if ( !dword_46BA08 )
        {
          if ( dword_474884 )
          {
            dword_46BA08 = 1;
            if ( !*(_DWORD *)(dword_487668 + 68) )
            {
              sub_256878("(gdb) \n", v9);
              v9 = *(_DWORD *)(v7 + 36);
            }
          }
        }
        result = sub_256834(v9);
        if ( v16 == 1 )
        {
          result = sub_22F070(result);
        }
        else if ( v16 )
        {
          if ( v16 == 2 )
            result = sub_22F01C(result);
        }
        else
        {
          result = sub_22EFA4(result);
        }
LABEL_26:
        v4 = (_DWORD *)*v4;
        if ( !v4 )
          break;
        dword_487668 = (int)v4;
      }
    }
    dword_487668 = v12;
  }
  return result;
}
