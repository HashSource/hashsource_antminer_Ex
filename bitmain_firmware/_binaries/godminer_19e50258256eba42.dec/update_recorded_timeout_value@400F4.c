int __fastcall update_recorded_timeout_value(unsigned __int64 a1)
{
  int i; // [sp+8h] [bp-14h]
  int v3; // [sp+Ch] [bp-10h]
  unsigned __int64 v4; // [sp+10h] [bp-Ch]

  v4 = -1;
  v3 = 0;
  for ( i = 0; i <= 9; ++i )
  {
    if ( v4 > max_timeout_value[i] )
    {
      v4 = max_timeout_value[i];
      v3 = i;
    }
  }
  if ( a1 > v4 )
    max_timeout_value[v3] = a1;
  return a1;
}
