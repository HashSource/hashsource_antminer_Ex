void __fastcall sub_41A40(_DWORD *a1)
{
  const char *v2; // r0

  if ( sub_23E430(*a1, a1[1], a1[2]) )
  {
    if ( dword_46DCD4 )
    {
      v2 = (const char *)sub_230984(*a1, a1[1], a1[2]);
      sub_259880("[%s exited]\n", v2);
    }
    sub_23E3B4(*a1, a1[1], a1[2]);
  }
  JUMPOUT(0x41980);
}
