int sub_3C72C()
{
  int result; // r0

  result = ptrace(PTRACE_TRACEME, 0, 0);
  if ( result < 0 )
    sub_3D5F0("ptrace");
  return result;
}
