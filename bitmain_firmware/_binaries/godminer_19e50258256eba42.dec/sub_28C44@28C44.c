int sub_28C44()
{
  int result; // r0

  if ( !byte_5AC1FC )
  {
    result = deregister_tm_clones();
    byte_5AC1FC = 1;
  }
  return result;
}
