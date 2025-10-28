int __fastcall update_recorded_timeout_value(unsigned __int64 a1)
{
  unsigned __int64 *v1; // r2
  int v2; // r3
  int v3; // r12
  unsigned __int64 v4; // r6
  unsigned __int64 v5; // r4
  unsigned __int64 v6; // t1
  bool v7; // cf

  v1 = (unsigned __int64 *)&max_timeout_value;
  v2 = 0;
  v3 = 0;
  v4 = -1;
  do
  {
    v6 = *v1++;
    v5 = v6;
    v7 = v6 >= v4;
    if ( v6 < v4 )
      v3 = v2;
    ++v2;
    if ( !v7 )
      v4 = v5;
  }
  while ( v2 != 10 );
  if ( v4 < a1 )
    *(_QWORD *)&dword_165000[2 * v3 + 30] = a1;
  return a1;
}
