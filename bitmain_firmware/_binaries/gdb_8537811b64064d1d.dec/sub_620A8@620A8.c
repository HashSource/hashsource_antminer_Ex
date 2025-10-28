int __fastcall sub_620A8(int result, int a2)
{
  _DWORD *v2; // r4
  int v3; // r10
  int v4; // r6
  int i; // r0
  int v6; // r5
  int v7; // [sp+4h] [bp-24h]

  if ( !a2 )
  {
    v2 = (_DWORD *)dword_48769C;
    v3 = dword_487668;
    dword_487668 = dword_48769C;
    if ( dword_48769C )
    {
      v4 = result;
      for ( i = sub_191AE8(result); ; i = sub_191AE8(result) )
      {
        result = sub_60614(i);
        v6 = result;
        if ( result )
        {
          v7 = dword_46DC04;
          sub_22F070(result);
          sub_2594D8(
            *(_DWORD *)(v6 + 32),
            "thread-exited,id=\"%d\",group-id=\"i%d\"",
            *(_DWORD *)(v4 + 20),
            *(_DWORD *)(*(_DWORD *)(v4 + 28) + 8));
          result = sub_256834(*(_DWORD *)(v6 + 32));
          if ( v7 == 1 )
          {
            result = sub_22F070(result);
          }
          else if ( v7 )
          {
            if ( v7 == 2 )
              result = sub_22F01C(result);
          }
          else
          {
            result = sub_22EFA4(result);
          }
        }
        v2 = (_DWORD *)*v2;
        if ( !v2 )
          break;
        dword_487668 = (int)v2;
      }
    }
    dword_487668 = v3;
  }
  return result;
}
