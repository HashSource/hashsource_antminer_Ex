int sub_27E478()
{
  int result; // r0

  result = sub_1FE0F0(dword_48AA78);
  dword_48AA74 = result;
  if ( result )
  {
    dword_48AA80 = sub_1FE0FC(dword_48AA78);
    dword_48AA88 = sub_333C6C(0, 3, 0);
    result = tcgetpgrp(0);
    dword_48AA84 = result;
  }
  return result;
}
