

//------------------------------------------------------------------------------
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------




#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------

#include "JsonClassFactory.h"


namespace Facebook
{
    namespace Graph
    {

        public ref class FBGroup sealed 
        {
            public:

                static Object^ FromJson(
                    Platform::String^ JsonText 
                    );


                property Platform::String^ Id
                {
                    Platform::String^ get();
                    void set(Platform::String^ value);
                }


                property Platform::String^ Description
                {
                    Platform::String^ get();
                    void set(Platform::String^ value);
                }


                property Platform::String^ Email
                {
                    Platform::String^ get();
                    void set(Platform::String^ value);
                }


                property Platform::String^ Icon
                {
                    Platform::String^ get();
                    void set(Platform::String^ value);
                }


                property Platform::String^ Link
                {
                    Platform::String^ get();
                    void set(Platform::String^ value);
                }


                property Platform::String^ Name
                {
                    Platform::String^ get();
                    void set(Platform::String^ value);
                }


                property Platform::String^ Privacy
                {
                    Platform::String^ get();
                    void set(Platform::String^ value);
                }


            private:
                FBGroup(
                    );


                Platform::String^ _id;

                Platform::String^ _description;

                Platform::String^ _email;

                Platform::String^ _icon;

                Platform::String^ _link;

                Platform::String^ _name;

                Platform::String^ _privacy;

        };
    }
}



