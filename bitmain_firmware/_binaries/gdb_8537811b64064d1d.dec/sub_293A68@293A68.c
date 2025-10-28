int (__fastcall **sub_293A68())(_DWORD)
{
  int (__fastcall **result)(_DWORD); // r0

  result = &off_490104;
  off_490104 = 0;
  dword_48AAA0 &= ~0x80000u;
  if ( dword_48B6B8 )
    result = (int (__fastcall **)(_DWORD))sub_291148(dword_48B6B8);
  if ( dword_48B910 )
  {
    dword_48B910 = 0;
    if ( off_470738 )
      off_470738();
    return (int (__fastcall **)(_DWORD))sub_290CB4();
  }
  return result;
}
