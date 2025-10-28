int __fastcall lzo_pclock_open_default(int a1)
{
  if ( lzo_pclock_open(a1, 2) && lzo_pclock_open(a1, 1) && lzo_pclock_open(a1, 0) )
    return -(lzo_pclock_open(a1, 3) != 0);
  else
    return 0;
}
