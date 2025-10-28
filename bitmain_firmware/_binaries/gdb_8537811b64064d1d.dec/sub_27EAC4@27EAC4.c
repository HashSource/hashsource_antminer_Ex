__sighandler_t sub_27EAC4()
{
  int v0; // r4
  __sighandler_t result; // r0

  v0 = sub_1836B0();
  result = (__sighandler_t)sub_27E2C0(v0);
  if ( *(_BYTE *)(v0 + 120) || *(_DWORD *)result )
  {
    result = signal(2, (__sighandler_t)sub_27E2A4);
    dword_48AA98 = (int)result;
    dword_48AA9C = 1;
  }
  else
  {
    dword_48AA9C = 0;
  }
  return result;
}
