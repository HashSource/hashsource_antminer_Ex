int __fastcall sub_184BA8(int result)
{
  _DWORD *v1; // r0

  if ( dword_487930 )
  {
    v1 = (_DWORD *)sub_242FF0(result);
    result = sub_2594D8(*v1, "infrun: clear_step_over_info\n");
  }
  dword_487934 = 0;
  dword_487938 = 0;
  dword_48793C = 0;
  dword_487940 = -1;
  return result;
}
