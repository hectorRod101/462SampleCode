#pragma once

#include "/Users/hecthor/Desktop/fall_2019/462/sampleCode/Domain/Library/MaintainBooksHandler.hpp"

namespace Domain::Library
{
  class Books : public Domain::Library::MaintainBooksHandler
  {
    public:
      // Constructors
      using MaintainBooksHandler::MaintainBooksHandler;  // inherit constructors

      // Operations

     ~Books() noexcept override;
  }; // class Books


  /*****************************************************************************
  ** Inline implementations
  ******************************************************************************/
  inline Books::~Books() noexcept
  {}


}  // namespace Domain::Library
