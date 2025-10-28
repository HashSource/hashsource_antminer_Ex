int __fastcall sub_62190(_DWORD *a1)
{
  _DWORD *v1; // r6
  int v2; // r11
  int result; // r0
  int v5; // r10
  _DWORD *v6; // r4
  int v7; // r11
  int i; // r0
  int v9; // r5
  int v10; // r0
  int v11; // [sp+Ch] [bp-8h] BYREF

  result = sub_183AB0(a1[2], a1[3], a1[4]);
  v5 = result;
  if ( !result )
  {
    sub_94728("mi/mi-interp.c", 337, "%s: Assertion `%s' failed.", "void mi_new_thread(thread_info*)", "inf");
    v10 = sub_62BA4(&v11);
    *v1 = v2;
    sub_339024(v10);
  }
  v6 = (_DWORD *)dword_48769C;
  v7 = dword_487668;
  dword_487668 = dword_48769C;
  if ( dword_48769C )
  {
    for ( i = sub_191AE8(result); ; i = sub_191AE8(result) )
    {
      result = sub_60614(i);
      v9 = result;
      if ( result )
      {
        v11 = dword_46DC04;
        sub_22F070(result);
        sub_2594D8(*(_DWORD *)(v9 + 32), "thread-created,id=\"%d\",group-id=\"i%d\"", a1[5], *(_DWORD *)(v5 + 8));
        result = sub_256834(*(_DWORD *)(v9 + 32));
        if ( v11 == 1 )
        {
          result = sub_22F070(result);
        }
        else if ( v11 )
        {
          if ( v11 == 2 )
            result = sub_22F01C(result);
        }
        else
        {
          result = sub_22EFA4(result);
        }
      }
      v6 = (_DWORD *)*v6;
      if ( !v6 )
        break;
      dword_487668 = (int)v6;
    }
  }
  dword_487668 = v7;
  return result;
}
