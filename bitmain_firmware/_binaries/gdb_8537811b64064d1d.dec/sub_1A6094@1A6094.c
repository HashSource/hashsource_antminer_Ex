void sub_1A6094()
{
  if ( dword_487A88 != dword_487A78 )
  {
    dword_487A78 = dword_487A88;
    if ( dword_487A88 )
    {
      if ( !dword_487A8C )
      {
        sub_34922C(1726208);
        dword_487A8C = 1;
      }
      monstartup((u_long)main, (u_long)&unk_3492A8);
    }
    else
    {
      mcleanup();
    }
  }
}
