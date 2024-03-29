﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using MediatR;

namespace CarWorkshop.Aplication.CarWorkshop.Queries.GetCarWorkshopByEncodedName
{
    public class GetCarWorkshopByEncodedNameQuery : IRequest<CarWorkshopDto>
    {
        public string EncodedName { get; set; }

        public GetCarWorkshopByEncodedNameQuery(string encodedName)
        {
            EncodedName = encodedName;
        }
    }
}
