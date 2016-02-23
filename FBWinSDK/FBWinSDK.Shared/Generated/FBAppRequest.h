

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

#include "FBUser.h"

#include "FBUser.h"


namespace Facebook
{
    namespace Graph
    {

        public ref class FBAppRequest sealed 
        {
            public:

                static Object^ FromJson(
                    Platform::String^ JsonText 
                    );


                property Platform::String^ ActionType
                {
                    Platform::String^ get();
                    void set(Platform::String^ value);
                }


                property Platform::String^ CreatedTime
                {
                    Platform::String^ get();
                    void set(Platform::String^ value);
                }


                property Platform::String^ Data
                {
                    Platform::String^ get();
                    void set(Platform::String^ value);
                }


                property Facebook::Graph::FBUser^ From
                {
                    Facebook::Graph::FBUser^ get();
                    void set(Facebook::Graph::FBUser^ value);
                }


                property Platform::String^ Id
                {
                    Platform::String^ get();
                    void set(Platform::String^ value);
                }


                property Platform::String^ Message
                {
                    Platform::String^ get();
                    void set(Platform::String^ value);
                }


                property Facebook::Graph::FBUser^ To
                {
                    Facebook::Graph::FBUser^ get();
                    void set(Facebook::Graph::FBUser^ value);
                }


            private:
                FBAppRequest(
                    );


                Platform::String^ _action_type;

                Platform::String^ _created_time;

                Platform::String^ _data;

                Facebook::Graph::FBUser^ _from;

                Platform::String^ _id;

                Platform::String^ _message;

                Facebook::Graph::FBUser^ _to;

        };
    }
}




