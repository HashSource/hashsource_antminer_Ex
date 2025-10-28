std::bad_alloc *__fastcall sub_98480(std::bad_alloc *a1)
{
  *(_DWORD *)a1 = off_36FA68;
  std::bad_alloc::~bad_alloc(a1);
  return a1;
}
