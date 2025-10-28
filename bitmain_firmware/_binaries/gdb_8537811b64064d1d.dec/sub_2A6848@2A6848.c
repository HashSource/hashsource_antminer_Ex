const char *__fastcall sub_2A6848(int a1, int a2)
{
  _DWORD *v2; // r3
  _UNKNOWN **v3; // r12
  _DWORD *v5; // t1

  v2 = &unk_41D3F4;
  v3 = &off_4115E8;
  while ( 1 )
  {
    if ( a1 == v2[3] && (a2 == v2[4] || !a2 && v2[8]) )
      return (const char *)v2[6];
    v2 = (_DWORD *)v2[12];
    if ( !v2 )
    {
      v5 = v3[1];
      ++v3;
      v2 = v5;
      if ( !v5 )
        break;
    }
  }
  return "UNKNOWN!";
}
