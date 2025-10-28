std::bad_alloc *__fastcall sub_984A0(std::bad_alloc *a1)
{
  *(_DWORD *)a1 = off_36FA68;
  std::bad_alloc::~bad_alloc(a1);
  sub_33AC2C(a1);
  return a1;
}
