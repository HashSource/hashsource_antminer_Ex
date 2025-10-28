int __fastcall sub_C7220(int result)
{
  _DWORD *v1; // r4
  int v2; // r5
  int v3; // r0
  int v4; // r5

  v1 = (_DWORD *)result;
  if ( result )
  {
    if ( *(_DWORD *)(result + 8) == 9 )
LABEL_12:
      sub_94708("The 'while-stepping' command can only be used for tracepoints");
    while ( 1 )
    {
      if ( (int)v1[5] > 0 )
      {
        v2 = 0;
        do
        {
          v3 = *(_DWORD *)(v1[6] + 4 * v2++);
          sub_C7220(v3);
        }
        while ( v1[5] > v2 );
      }
      v4 = v1[1];
      if ( v4 == sub_338BFC(v4, "collect ") )
        sub_94708("The 'collect' command can only be used for tracepoints");
      result = sub_338BFC(v4, "teval ");
      if ( v4 == result )
        sub_94708("The 'teval' command can only be used for tracepoints");
      v1 = (_DWORD *)*v1;
      if ( !v1 )
        break;
      if ( v1[2] == 9 )
        goto LABEL_12;
    }
  }
  return result;
}
