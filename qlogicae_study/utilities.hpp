#pragma once

#include "pch.h"

namespace QLogicaeStudy
{

}

/*

Output
{
	about: {
		id: string
		title: string
		description: string
		authors: string[]
		test_taker: string
		is_randomized: bool
	}
	data: {
		questions: [
			{
				id: string
				question: string
				answers: string[]
				order: number
				is_randomized: bool

				score: double
				partial_score: double
				is_correct: bool
				timestamp_start: bool
				timestamp_end: bool

			}
		]
		overview: {
			total_questions: number
			total_correct_answers: number
			total_correct_answer_percentage: double
			total_wrong_answers: number
			total_wrong_answer_percentage: double
			timestamp_start: datetime
			timestamp_end: datetime
		}
	}
}

Input
{
	about: {
		id: string
		title: string
		description: string
		authors: string[]
		test_taker: string
		score: double
		partial_score: double
		is_randomized: bool
	}
	questions: [
		{
			id: string
			question: string
			answers: string[]
			order: number
			is_randomized: bool
		}
	]
}

*/
