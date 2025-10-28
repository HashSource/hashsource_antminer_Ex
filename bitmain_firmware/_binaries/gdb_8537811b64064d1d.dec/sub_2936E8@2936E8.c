int sub_2936E8()
{
  int v0; // r0
  int result; // r0
  unsigned int v2; // r0
  int v3; // r7
  char *v4; // r4
  int v5; // r0
  int v6; // r3

  if ( !off_490104 )
  {
    sub_29155C("readline_callback_read_char() called with no handler!");
    abort();
  }
  memcpy(&unk_48B918, &unk_48FF38, 0x188u);
  v0 = setjmp((struct __jmp_buf_tag *)&unk_48FF38);
  if ( v0 )
  {
    off_470784(v0);
    dword_48AF04 = 0;
    return (int)memcpy(&unk_48FF38, &unk_48B918, 0x188u);
  }
  while ( 1 )
  {
    if ( dword_48B6B8 )
      sub_291148(dword_48B6B8);
    if ( (dword_48AAA0 & 0x80) != 0 )
    {
      result = sub_28C264((_DWORD *)dword_48ADF8);
      if ( result || (dword_48AAA0 & 0x20080) != 0x20000 )
        return result;
      return sub_2936E8();
    }
    if ( (dword_48AAA0 & 0x100) != 0 )
      return sub_283F24((_DWORD *)dword_48ABE4);
    if ( (dword_48AAA0 & 0x100000) != 0 )
    {
      result = sub_28227C((int *)dword_48ABAC);
      if ( (dword_48AAA0 & 0x400) == 0 )
        return sub_27F294(result);
      return result;
    }
    if ( (dword_48AAA0 & 0x400) != 0 )
      break;
    if ( (dword_48AAA0 & 0x200000) != 0 )
    {
      while ( 1 )
      {
        v2 = sub_27FBF0(dword_48AAD8);
        v3 = v2;
        v6 = dword_48AAA0 & 0x200000;
        if ( v2 < 0xFFFFFFFE )
          break;
        if ( !v6 )
          goto LABEL_37;
        v2 = dword_48AAD8;
        if ( !dword_48AAD8 || (*(_DWORD *)dword_48AAD8 & 1) == 0 )
          goto LABEL_18;
      }
      if ( v6 )
        goto LABEL_18;
LABEL_37:
      v2 = sub_27F294(v2);
      dword_48AF04 = 1;
    }
    else if ( off_48BAA0 )
    {
      v2 = off_48BAA0(dword_48BAA4);
      v3 = v2;
      if ( !off_48BAA0 )
      {
        v5 = dword_48BAA4;
        if ( dword_48BAA4 )
        {
          v5 = sub_297780(dword_48BAA4);
          dword_48BAA4 = 0;
        }
        v2 = sub_27F294(v5);
      }
    }
    else
    {
      v2 = sub_27F8B0();
      v3 = v2;
    }
LABEL_18:
    if ( dword_48B6B8 )
      v2 = sub_291148(dword_48B6B8);
    if ( dword_48FF30 || dword_48AF04 && (off_470784(v2), dword_48AF04 = 0, dword_48FF30) )
    {
      v4 = sub_27F180(v3);
      if ( off_470738 )
        off_470738();
      sub_290CB4();
      dword_48B910 = 0;
      off_490104(v4);
      if ( *(_BYTE *)dword_48AAD4 )
        sub_27F3C8();
      if ( !dword_48B910 && off_490104 )
        sub_293644();
    }
    if ( !dword_48AAE0 )
    {
      result = sub_292E1C();
      if ( !result && (dword_48AAA0 & 0x800) == 0 )
        return result;
    }
  }
  result = sub_297128(dword_490154);
  if ( !result && (dword_48AAA0 & 0x20400) == 0x20000 )
    return sub_2936E8();
  if ( (dword_48AAA0 & 0x400) == 0 )
    return sub_27F294(result);
  return result;
}
